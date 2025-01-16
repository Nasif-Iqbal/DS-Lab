#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
vector<bool>vis(100,false);

void dfs(int n)
{
    if(vis[n]==false)
    {
        vis[n]=true;
        cout<<n<<"->";
        for(auto i:adj[n])
        {
            dfs(i);
        }
    }
}
int main()
{
    int edge=5;
   // cin>>edge;
    for(int i=0; i<edge; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}
