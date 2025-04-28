#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int solve(vector<int>&arr,int i, int j)
{
     if(i>=j)
        return 0;
     if(dp[i][j]!=-1)
        return dp[i][j];
     int ans=INT_MAX;
     for(int k=i; k<j; k++)
     {
        int temp_ans=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
        ans=min(ans,temp_ans);
     }
     return dp[i][j]=ans;
}
int main()
{

    memset(dp,-1,sizeof(dp));
    vector<int>arr={2,1,3,4};
    int n=arr.size();
    int ans=solve(arr,1,n-1);
    cout<<ans<<endl;

    return 0;
}
