#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll,ll>x,pair<ll,ll>y)
{
 return ((double)x.first/x.second)>((double)y.first/y.second);
}
int main()
{
 ll n, box;
 cin >> n >> box;
 vector<ll>w(n),p(n);
 for(auto &i : w) cin >> i; /// O(n)
 for(auto &i : p) cin >> i; /// O(n)
 vector<pair<ll,ll>>r;
 for(int i=0 ; i<n; i++) r.push_back({p[i],w[i]}); /// O(n)
 sort(r.begin(),r.end(),cmp); /// O(nlogn)
 double res = 0;
 for(int i=0 ; i<n ; i++) /// O(n)
 {
 if(r[i].second<=box)
 {
res+=r[i].first;
 box-=r[i].second;
 }
 else
 {
 res+=((double)r[i].first/r[i].second)*box;
 break;
 }
 }
 cout << fixed << setprecision(6) << res;
 
 return 0;
}
𝑇𝑜𝑡𝑎𝑙 𝑇𝑖𝑚𝑒 𝐶𝑜𝑚𝑝𝑙𝑒𝑥𝑖𝑡𝑦 = 𝑂(𝑛) + 𝑂(𝑛) + 𝑂(𝑛) + 𝑂(𝑛 log 𝑛 ) + 𝑂(𝑛)
= 𝑂(𝑛 log 𝑛 ) + 4𝑂(𝑛)
∴ Time Complexity = O(n logn)
