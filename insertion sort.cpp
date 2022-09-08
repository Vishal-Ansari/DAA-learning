// insertion sort


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count_c=0, count_s=0;
    for(int i=1;i<n;i++)
    {
        int k=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j=j-1;
            count_c++;
        }
        arr[j+1]=k;
        count_s++;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"The Total number of Comparisons: "<<count_c;
    cout<<endl<<"The Total number of Shifts: "<<count_s<<endl;
    return 0;
}
