#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n+10]={21,1,10,5,2};

    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

