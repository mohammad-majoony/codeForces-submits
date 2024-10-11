// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341365/problem/B

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

int const N = 1e5 + 5;
vector<int> ed[N];
vector<bool> vis;

void dfs(int cu)
{
    vis[cu] = true;
    for (auto nei : ed[cu])
    {
        if (!vis[nei])
            dfs(nei);
    }
}

void solve()
{
    int n, m, x, y; 
    vis.resize(N, false);
    cin >> n >> m;

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }


    int count{};
    for (int i{1}; i <= n; ++i)
    {
        if (!vis[i])
        {
            dfs(i);
            count++;
        }
    }

    cout << ((n != m + 1 || count > 1) ? "no" : "yes");
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