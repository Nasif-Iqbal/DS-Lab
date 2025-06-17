#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>>adj(10000);
vector<bool>vis(10000, false);
void dfs(int n)
{
 vis[n]=true;
 for(auto i : adj[n])
 {
 if(vis[i]==false) dfs(i);
 }
}
int main()
{
 ll n, e;
 cout << "Enter number of cities (nodes): ";
 cin >> n;
 cout << "Enter number of bridges (edges): ";
 cin >> e;
 cout << "Enter pairs of city numbers that are connected";
 for(int i=0 ; i<e ; i++) /// O(e)
 {
 ll x,y;
 cin >> x >> y;
 adj[x].push_back(y);
adj[y].push_back(x);
 }
 dfs(1); /// O(n+e)
 ll con = 0;
 for(int i=1 ; i<=n ; i++) /// O(n)
 {
 if(vis[i]) con++;
 }
 if(con==n) cout << "Yes\n";
 else cout << "No\n";
 return 0;
}
𝑇𝑜𝑡𝑎𝑙 𝑇𝑖𝑚𝑒 𝐶𝑜𝑚𝑝𝑙𝑒𝑥𝑖𝑡𝑦 = 𝑂(𝑒) + 𝑂(𝑒 + 𝑛) + 𝑂(𝑛)
∴ Time Complexity = O(n + e)
