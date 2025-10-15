#include <iostream>

using namespace std;

int top = 0, a[10], i, item;

class stack
{
public:
    void push()
    {
        if (top >= 5)
            cout << "Stack is full" << endl;
        else
        {
            cout << "Enter item: ";
            cin >> item;
            a[++top] = item;
        }
    }

    void pop()
    {
        if (top <= 0)
            cout << "No item in the stack" << endl;
        else
            cout << "Element is deleted: " << a[top--] << endl;
    }

    void display()
    {
        if (top <= 0)
            cout << "No item in the stack" << endl;
        else
        {
            for (i = top; i > 0; i--)
                cout << a[i] << endl;
        }
    }
};

int main()
{
    stack s;
    int ch;

    do
    {
        cout << "1. Push  2. Pop  3. Display  4. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        }

    } while (ch <= 3);

    return 0;
}
