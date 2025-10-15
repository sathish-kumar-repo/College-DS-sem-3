#include <iostream>

using namespace std;

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

void inorder(node *t)
{
    if (t != 0)
    {
        inorder(t->lc);
        cout << t->data << "\t";
        inorder(t->rc);
    }
}

int main()
{

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

    inorder(root);

    return 0;
}
