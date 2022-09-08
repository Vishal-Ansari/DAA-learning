#include<iostream>
using namespace std;

void merge(int *a, int low, int high ,int mid)
{
    int i=low;
    int j=mid+1;
    int k=0;
    int temp[high-low+1];

    while(i<=mid && j<=high)
    {
        if( a[i]<a[j] )
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=high)
    {
        temp[k++]=a[j++];
    }
    for(i=low;i<=high;i++)
    a[i]=temp[i-low];
}


void mergesort(int *a, int low, int high)
{
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a, low,mid);
        mergesort(a, mid+1,high);
        merge(a,low,high,mid);
    }
}



int main(){
     int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
   return 0;
}