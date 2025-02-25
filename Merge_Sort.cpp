#include<bits/stdc++.h>
using namespace std;

void mergee(int arr[],int start,int mid,int endi)
{
    vector<int>temp(endi-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=endi)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++;
        left++;
    }
    while(right<=endi)
    {
        temp[index]=arr[right];
        index++;
        right++;
    }
    index=0;
    while(start<=endi)
    {
        arr[start]=temp[index];
        start++;
        index++;
    }
}
void mergesort(int arr[], int start, int endi)
{
   if(start==endi)
   {
       return;
   }
   int mid=start+(endi-start)/2;
   mergesort(arr,start,mid);
   mergesort(arr,mid+1,endi);
   mergee(arr,start,mid,endi);

}
int main()
{
    int arr[]={6,3,1,2,8,9,10,7,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
