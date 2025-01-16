#include<bits/stdc++.h>
using namespace std;

int Aq(int m,int n)
{
    if(m==0) return n+1;
    else if(m!=0 && n==0) return Aq(m-1,1);
    else if(m!=0 && n!=0) return Aq(m-1,Aq(m,n-1));
}

int main()
{
    int m,n;
    cin >> m >> n;
    cout << Aq(m,n);
}

