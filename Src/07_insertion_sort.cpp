#include <iostream>

using namespace std;

int main()
{
    int size, a[50], i, j, temp;

    cout << "enter array size: ";
    cin >> size;

    cout << "enter array elements" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "sorting array using insertion sort" << endl;

    for (i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;

        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = temp;
    }

    cout << "array after sorting" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
