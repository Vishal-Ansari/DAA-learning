// selection sort

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}