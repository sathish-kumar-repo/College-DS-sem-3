#include <iostream.h>
#include <conio.h>

class node
{
public:
    node *lc;
    int data;
    node *rc;

    node()
    {
        lc = rc = 0;
    }
};

void postorder(node *t)
{
    if (t != 0)
    {
        postorder(t->lc);
        postorder(t->rc);
        cout << t->data << "\t";
    }
}

void main()
{
    clrscr();
    cout << "Enter the data for root: ";
    int data;
    node *root;
    root = new node;
    cin >> root->data;

    cout << "Enter data for left child: ";
    node *temp = new node;
    cin >> temp->data;
    root->lc = temp;

    cout << "Enter data for right child: ";
    node *temp1 = new node;
    cin >> temp1->data;
    root->rc = temp1;

    postorder(root);
    getch();
}

/*
*OUTPUT:

Enter the data for root: 10
Enter data for left child: 20
Enter data for right child: 30
20      30      10

*/