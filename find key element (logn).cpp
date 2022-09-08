// Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).


#include<iostream>
using namespace std;

int binarySearch(int arr[], int l,int h,int key)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        return mid;
        if(key<arr[mid])
        return binarySearch(arr,l,mid-1,key) ;
        else
        return binarySearch(arr,mid+1,h,key) ;
        
    }
    return -1;
}

int main(){
    int size;
    cout<<"enter the size of array ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array\n";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    int key;
    cout<<"enter the element to be searched ";
    cin>>key;
    int result=binarySearch(arr, 0, size -1, key);
    (result==-1)?cout<<"element not is present in array" : cout<<"element is present at index"<<result;

   return 0;
}

