// Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))


#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int key)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        return mid;
        if(key<arr[mid])
        return binarySearch(arr,l,mid-1,key);
        else
        return binarySearch(arr,mid+1,h,key);
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
    (result==-1)?cout<<"element not is present in array" : cout<<"element is present at index  "<<result<<endl;

    int count=0;
    int found=result;
    while(arr[found]==key)
    {
        count++;
        found--;
    }
    found=result;
    while(arr[found+1]==key)
    {
        count++;
        found++;
    }
    cout<<"the copy of searcched element "<<key<<" is "<<count;

   return 0;
}
// 1 2 2 2 3 3 4 5 5 6 6 6 7 8 8 