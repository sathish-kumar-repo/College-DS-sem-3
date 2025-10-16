#include <iostream.h>
#include <conio.h>
#include <process.h>

void main()
{
    int a[10], se, i, n;
    clrscr();

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "\nEnter array elements:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "\nEnter search element: ";
    cin >> se;

    for (i = 0; i < n; i++)
    {
        if (a[i] == se)
        {
            cout << "\nElement is found.";
            getch();
            exit(0);
        }
    }

    cout << "\nElement is not found.";
    getch();
}
