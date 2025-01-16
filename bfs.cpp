#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
vector<bool>vis(100,false);

void bfs(int s)
{
    queue<int>q;
    int source=s;
    q.push(source);
    vis[source]=true;
    while(!q.empty())
    {
        source=q.front();
        q.pop();
        cout<<source<<" ";
        for(auto child:adj[source])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }

}
int main()
{
    int edge=6;
   // cin>>edge;
    int x,y;
    for(int i=0; i<edge; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(2);
}
