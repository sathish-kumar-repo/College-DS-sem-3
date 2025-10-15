#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class node
{
    int data;
    node *next;

public:
    node()
    {
        data = 0;
        next = 0;
    }
    friend class stack;
};

class stack
{
    node *top;

public:
    stack()
    {
        top = 0;
    }

    void push(int x);
    void pop();
    void display();
};

void stack::push(int x)
{
    node *temp = new node;
    temp->data = x;
    if (top == 0)
        top = temp;
    else
    {
        temp->next = top;
        top = temp;
    }
}

void stack::pop()
{
    if (top == 0)
        cout << "Stack empty" << endl;
    else
    {
        cout << "Popped: " << top->data << endl;
        top = top->next;
    }
}

void stack::display()
{
    for (node *temp = top; temp != 0; temp = temp->next)
        cout << temp->data << endl;
}

void main()
{
    int item, c;
    clrscr();
    stack s;

    do
    {
        cout << "1. Push  2. Pop  3. Display  4. Exit" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter item: ";
            cin >> item;
            s.push(item);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        default:
            exit(0);
        }

        getch();
    } while (c <= 3);
}
