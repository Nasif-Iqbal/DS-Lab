#include<bits/stdc++.h>
using namespace std;


int partitioni(vector<int>&arr,int start,int endi)
{
    int pos=start;
    for(int i=start; i<=endi; i++)
    {
       if(arr[i]<=arr[endi])
       {
           swap(arr[i],arr[pos]);
           pos++;
       }
    }
    return pos-1;
}
void quicksort(vector<int>&arr,int start, int endi)
{
    if(start>=endi)
        return;
    int pivot=partitioni(arr,start,endi);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,endi);
}
int main()
{

    vector<int>arr={4,10,5,8,2,9,11,1,12};
    //int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,8);
    for(int i=0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
