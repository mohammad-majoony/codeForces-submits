// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/17/problem/B

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
    int len, m, a, b, c, cost{}, visCount{}, num;
    cin >> len;

    bool vis[len + 1];
    int minCost[len + 1];

    for (int i{1}; i <= len; ++i)
        cin >> num;

    cin >> m;
    memset(vis, false, sizeof vis);
    for (int i{}; i < m; ++i)
    {
        cin >> a >> b >> c;
        if (!vis[b])
        {
            visCount++;
            cost += c;
            minCost[b] = c;
            vis[b] = true;
        }
        else
        {
            if (minCost[b] > c)
            {
                cost = cost - minCost[b] + c;
                minCost[b] = c;
            }
        }
    }

    cout << ((visCount == len - 1) ? cost : -1);
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