// Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):  


#include <bits/stdc++.h>
using namespace std;

void JumpSearch(int arr[], int size, int key)
{
    if (key == arr[0])
        cout << "element present at first position";
    else
    {
        int end = 1, i;
        while (arr[end] < key)
            end *= 2;

        int start = end / 2;
        for (i = start; i <= (size < end ? size : end); i++)
        {
            if (key == arr[i])
            {
                cout << "element " << key << " present at the index " << i;
                break;
            }
        }
        if (i == (end + 1) || i == (size + 1))
            cout << "element not found";
    }
}


int main()
{
    int size;
    cout << "enter the size of array ";
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int key;
    cout << "enter the element to be searched ";
    cin >> key;
    JumpSearch(arr, size, key);

    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20