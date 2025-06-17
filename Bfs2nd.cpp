#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>>adj(10000);
vector<bool>vis(10000,false);
void bfs(int n)
{
 queue<ll>q;
 q.push(n);
 while(q.empty()==false)
 ll so = q.front();
 q.pop();
if(vis[so]) continue;
 vis[so]=true;
 for(auto i : adj[so])
 {
 if(vis[i]==false) q.push(i);
 }
 }
}
int main()
{
 ll n,e;
 cin >> n >> e;
 for(int i=0 ; i<e ; i++) ///O(e)
 {
 ll x,y;
 cin >> x >> y;
 adj[x].push_back(y);
 adj[y].push_back(x);
 }
 bfs(1); ///O(n+e)
 ll con = 0;
 for(int i=1 ; i<=n ; i++) ///O(n)
 {
 if(vis[i]) con++;
 }
 if(con==n) cout << "Yes\n";
 else cout << "No\n";
}
𝑇𝑜𝑡𝑎𝑙 𝑇𝑖𝑚𝑒 𝐶𝑜𝑚𝑝𝑙𝑒𝑥𝑖𝑡𝑦 = 𝑂(𝑒) + 𝑂(𝑒 + 𝑛) + 𝑂(𝑛)
∴ Time Complexity = O(n + e)
