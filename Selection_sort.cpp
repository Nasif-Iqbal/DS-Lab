#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n+10]={21,1,10,5,2};

    for(int i=0; i<n-1; i++)
    {
        int min_pos=i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_pos])
                min_pos=j;
        }
      
        swap(arr[i],arr[min_pos]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

