#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int a[10], i, j, n, t;

    cout << "Enter total number of elements: ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    cout << "Sorted data: " << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << endl;

    getch();
}

/*
*OUTPUT:

Enter total number of elements: 5
Enter array elements:
27
79
7
32
18
Sorted data:
7
18
27
32
79

*/