// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2024/problem/D

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

void solve()
{
    int len, sums{};
    cin >> len;
    int a[len], b[len];

    for (int i{}; i < len; ++i)
        cin >> a[i];
    for (int i{}; i < len; ++i) 
        cin >> b[i];

    int vis[len];
    memset(vis, -1, sizeof vis);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qu;
    qu.push({0, 0});
    vis[0] = 0;

    while (!qu.empty())
    {
        auto [we, node] = qu.top();
        qu.pop();
        if (node && (vis[node - 1] > we || !~vis[node - 1]))
        {
            vis[node - 1] = we;
            qu.push({we, node - 1});
        } 
        if (!~vis[b[node] - 1] || vis[b[node] - 1] > we + a[node])
        {
            vis[b[node] - 1] = we + a[node];
            qu.push({we + a[node], b[node] - 1});
        }
    }

    int res{};
    for (int i{}; i < len; ++i)
    {
        sums += a[i];
        if (~vis[i])
            res = max(res, sums - vis[i]);
    }
    cout << res << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
     int tc ; cin >> tc; while(tc--)
    solve();
}