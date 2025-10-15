#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class queue
{
public:
    int i, front, rear;
    int q[5];

    void setvalue()
    {
        front = rear = 0;
    }

    void enqueue(int x)
    {
        if (rear > 4)
            cout << "queue is full" << endl;
        else
        {
            if (front == 0)
                front = 1;
            q[++rear] = x;
        }
    }

    void dequeue()
    {
        if (front == 0)
            cout << "queue is empty" << endl;
        else
            cout << "Deleted " << q[front++] << endl;
    }

    void display()
    {
        for (i = front; i <= rear; i++)
            cout << q[i] << endl;
    }
};

void main()
{
    int ch, item;
    clrscr();

    queue x;
    x.setvalue();

    do
    {
        cout << "1.enqueue 2.dequeue 3.display 4.exit" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "enter item to insert" << endl;
            cin >> item;
            x.enqueue(item);
            break;
        case 2:
            x.dequeue();
            break;
        case 3:
            x.display();
            break;
        default:
            exit(0);
        }
    } while (1);

    getch();
}
