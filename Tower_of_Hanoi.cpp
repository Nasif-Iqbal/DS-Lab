#include<bits/stdc++.h>
using namespace std;

void tower(int n, char s, char a, char d)
{
    if(n==0)
        return;
    tower(n-1,s,d,a);
    cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
    tower(n-1,a,s,d);
}
int main()
{
    int n=5;
    char s='s',a='a',d='d';

    tower(n,s,a,d);
    
    return 0;
}
