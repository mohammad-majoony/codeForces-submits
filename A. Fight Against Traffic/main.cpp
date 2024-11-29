// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341363/problem/A

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

int const N = 1e3 + 3;
bool connect[N][N];
int vis[2][N];
vector<int> ed[N];

void bfs(int cu, bool ist)
{
    queue<int> qu;
    qu.push(cu);
    vis[ist][cu] = 1;

    while (!qu.empty())
    {
        int node = qu.front();
        qu.pop();
        for (auto nei: ed[node])
        {
            if (!~vis[ist][nei])
            {
                vis[ist][nei] = vis[ist][node] + 1;
                qu.push(nei);
            }
        }
    }
}

void solve()
{
    int n, m, x, y, s, t;
    cin >> n >> m >> s >> t;

    memset(connect, false, sizeof connect); 
    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
        connect[x][y] = true;
        connect[y][x] = true;
    }

    memset(vis, -1, sizeof vis); 
    bfs(s, false), bfs(t, true);
    
    int count{}, d;
    for (int i{1}; i <= n; ++i) 
    {
        for (int j{i + 1}; j <= n; ++j)
        {
            if (connect[i][j])
                continue;

            if (vis[0][i] > vis[0][j])
                d = vis[0][j] + 1 + vis[1][i];
            else  
                d = vis[0][i] + 1 + vis[1][j];

            if (d > vis[0][t])
                count++; 
        }
    }
    cout << count << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}