// Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n-2;i++)
    for(int j=i+1;j<n-1;j++)
    for(int k=j+1;k<n;k++)
    {
        if((arr[i]+arr[j])==arr[k])
        cout<<"i: "<<i<<" | j: "<<j<<" | k: "<<k<<endl; 
    }
    return 0;
}