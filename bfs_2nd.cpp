#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define endl '\n'
const int nn = 1e5 + 10;
vector<int> g[nn];
int vis[nn];
int level[nn];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << sp;
        for (auto u : g[cur_v])
        {
            if (vis[u] == 0)
            {
                q.push(u);
                vis[u] = 1;
                level[u] = level[cur_v] + 1;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << sp << ':' << sp << level[i] << endl;
    }
}

int main()
{

    solve();

    return 0;
}
