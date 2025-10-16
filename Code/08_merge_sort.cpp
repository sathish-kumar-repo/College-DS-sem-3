#include <iostream.h>
#include <conio.h>

void ms(int, int);
void merge(int, int, int);
int a[10], i, j, n;

void main()
{
    clrscr();
    cout << "Enter total no: ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 1; i <= n; i++)
        cin >> a[i];

    ms(1, n);

    cout << "Sorting order:" << endl;
    for (i = 1; i <= n; i++)
        cout << a[i] << endl;

    getch();
}

void ms(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        ms(low, mid);
        ms(mid + 1, high);
        merge(low, mid, high);
    }
}

void merge(int low, int mid, int high)
{
    int h = low, i = low, j = mid + 1, b[10];

    while (h <= mid && j <= high)
    {
        if (a[h] <= a[j])
            b[i++] = a[h++];
        else
            b[i++] = a[j++];
    }

    if (h > mid)
        for (int k = j; k <= high; k++)
            b[i++] = a[k];
    else
        for (int k = h; k <= mid; k++)
            b[i++] = a[k];

    for (int k = low; k <= high; k++)
        a[k] = b[k];
}

/*
*OUTPUT:

Enter total no: 5
Enter array elements:
74
92
69
17
40
Sorting order:
17
40
69
74
92

*/