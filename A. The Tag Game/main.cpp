// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341364/problem/A

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

int const N = 2e5 + 5;
vector<int> ed[N];
vector<int> vis(N, -1), visone(N, -1);

void solve()
{
    int n, x, xx, yy, maxi{};
    cin >> n >> x;


    for (int i{}; i < n - 1; ++i)
    {
        cin >> xx >> yy;
        ed[xx].push_back(yy);
        ed[yy].push_back(xx);
    }    

    queue<int> qu;
    qu.push(x); 
    vis[x] = 0;

    while (!qu.empty())
    {
        int node = qu.front();
        qu.pop();
        for (auto nei: ed[node])
        {
            if (!~vis[nei])
            {
                vis[nei] = vis[node] + 1;
                qu.push(nei);
            }
        }
    }

    visone[1] = 0;
    qu.push(1);
    while (!qu.empty())
    {
        int node = qu.front();
        if (visone[node] > vis[node])
            maxi = max(maxi, visone[node] * 2);

        qu.pop();
        for (auto nei: ed[node])
        {
            if (!~visone[nei])
            {
                visone[nei] = visone[node] + 1;
                qu.push(nei);
            }
        }
    }

    cout << maxi;
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