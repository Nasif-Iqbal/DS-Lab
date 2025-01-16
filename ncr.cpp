#include<bits/stdc++.h>
using namespace std;

long long ncr(int n,int r)
{
    if(n<r)
        return 0;
    else if(n==r || r==0)
        return 1;

    return ncr(n-1,r-1) + ncr(n-1,r);
}
int main()
{
    long long n,r;
    cin >> n >> r;
    cout << ncr(n,r);

    return 0;
}


