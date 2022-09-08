#include<iostream>
using namespace std;

int partition( int arr[], int start, int end)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++)
    if(arr[i]<=pivot)
    count++;

    int pindex=start+count;
    swap(arr[pindex],arr[start]);
    int i=start,j=end;
    while(i<pindex && j>pindex){
        while(arr[i]<=pivot)
        i++;
        while(arr[j]>pivot)
        j--;
        if(i<pindex && j>pindex)
        swap(arr[i++],arr[j--]);
    }
    return pindex;
}

void quicksort(int arr[], int start,int end){
    if(start>=end)
    return;
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}

int main(){
    int n, i;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(i = 0; i < n; i++)
	cin>>arr[i];
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}