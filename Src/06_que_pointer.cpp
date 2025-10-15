#include <iostream>

using namespace std;

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
    friend class queue;
};

class queue
{
    node *front, *rear;

public:
    queue()
    {
        front = rear = 0;
    }

    void insert(int x);
    void remove();
    void display();
};

void queue::insert(int x)
{
    node *temp = new node;
    temp->data = x;
    if (rear == 0)
        front = rear = temp;
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void queue::remove()
{
    if (front == 0)
        cout << "queue is empty" << endl;
    else
    {
        cout << "Deleted " << front->data << endl;
        front = front->next;
    }
}

void queue::display()
{
    for (node *temp = front; temp != 0; temp = temp->next)
        cout << temp->data << endl;
}

int main()
{
    int item, c;

    queue q;

    do
    {
        cout << "1.insert 2.remove 3.display 4.exit" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "enter item" << endl;
            cin >> item;
            q.insert(item);
            break;

        case 2:
            q.remove();
            break;

        case 3:
            q.display();
            break;

        default:
            exit(0);
        }
    } while (1);

    return 0;
}
