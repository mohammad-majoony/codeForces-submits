// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341358/problem/J

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

#define p pair<int, int>
#define f first
#define s second

int const N = 25;
int n, m;
int r[N], c[N];
vector<p> topo;
bool vis[N][N];

void topologyOrder(int x, int y)
{
    vis[x][y] = true;

    if (0 <= y + r[x] && y + r[x] < m && !vis[x][y + r[x]])
        topologyOrder(x, y + r[x]);
    if (0 <= x + c[y] && x + c[y] < n && !vis[x + c[y]][y])
        topologyOrder(x + c[y], y);

    topo.push_back({x, y});
}

void dfs(int x, int y)
{
    vis[x][y] = true;

    if (0 <= x + c[y] && x + c[y] < n && !vis[x + c[y]][y])
        dfs(x + c[y], y);
    if (0 <= y + r[x] && y + r[x] < m && !vis[x][y + r[x]])
        dfs(x, y + r[x]);
}

void solve()
{
    int x, y;
    unordered_map<char, int> pos;
    pos['<'] = pos['^'] = -1;
    pos['>'] = pos['v'] = 1;

    cin >> n >> m;
    string txt;

    cin >> txt;
    for (int i{}; i < n; ++i)
        r[i] = pos[txt[i]];

    cin >> txt;
    for (int i{}; i < m; ++i)
        c[i] = pos[txt[i]];

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            if (!vis[i][j])
                topologyOrder(i, j);
        }
    }

    int sc{};
    memset(vis, false, sizeof vis);
    for (auto pa : topo)
    {
        x = pa.f, y = pa.s;
        if (!vis[x][y])
        {
            dfs(x, y);
            sc++;
        }
    }

    cout << ((sc != 1) ? "NO" : "YES");
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