// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341364/problem/B

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

int const N = 1e2 + 5;
vector<pair<int, int>> ed[N];

int dfs(int cu, int par)
{
    int res = {};
    for (auto p : ed[cu])
    {
        if (p.first == par)
            continue;
        res = max(res, p.second + dfs(p.first, cu));
    }

    return res;
}

void solve()
{
    int n, x, y, w;
    cin >> n;

    for (int i{}; i < n - 1; ++i)
    {
        cin >> x >> y >> w;
        ed[++x].push_back({++y, w});
        ed[y].push_back({x, w});
    }

    cout << dfs(1, 0);
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