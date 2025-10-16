#include <iostream>
#include <conio.h>

void main()
{
    int a[100], n, beg, end, mid, data;

    clrscr();
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter data you want to search: ";
    cin >> data;

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while ((beg <= end) && (a[mid] != data))
    {
        if (a[mid] > data)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }

    if (a[mid] == data)
        cout << "\nData is found";
    else
        cout << "\nData is not found";

    getch();
}

/*
*OUTPUT: 1

Enter number of elements: 3
Enter array elements in sorted order: 10
20
30
Enter data you want to search: 20

Data is found

*OUTPUT: 2

Enter number of elements: 3
Enter array elements in sorted order: 10
20
30
Enter data you want to search: 70

Data is not found

*/