#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int index,int n)
{
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;

    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}
void buildmaxheap(int arr[],int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        heapify(arr,i,n);
    }
}
void sortarray(int arr[],int n)
{
    for(int i=n-1; i>0; i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
    }
}
int main()
{

    int arr[]={10,3,8,9,5,13,18,14,11,70};
    buildmaxheap(arr,10);
    sortarray(arr,10);
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
