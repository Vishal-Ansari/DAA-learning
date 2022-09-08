    // Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)

#include <iostream>
using namespace std;

    int main()
    {
        int n, com = 0;
        cout << "enter the size of array\n";
        cin >> n;
        int arr[n];
        cout << "enter the elements of the array\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int x, count = 0, flag = 0;
        cout << "enter element to be searched  ";
        cin >> x;

        for (int i = 0; i < n; i++)
        {
            if (x == arr[i])
            {
                flag = 1;
                count++;
            }
        }
        if (flag == 1)
            cout << x << " is present and the count is " << count;
        else
            cout << "no the given element is not present";

        return 0;
    }