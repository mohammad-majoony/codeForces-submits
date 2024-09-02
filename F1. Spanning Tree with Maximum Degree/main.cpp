// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1133/F1

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
    int n, m, x, y, maxi{}, node{};
    cin >> n >> m;

    vector<int> ed[n + 1];
    unordered_map<int, int> deg;
    unordered_map<int, bool> con;

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        deg[x]++, deg[y]++;
        ed[x].push_back(y);
        ed[y].push_back(x);
        if (deg[x] > maxi)
        {
            maxi = deg[x];
            node = x;
        }
        if (deg[y] > maxi)
        {
            maxi = deg[y];
            node = y;
        }
    }
    con[node] = true;
    queue<int> qu;
    qu.push(node);
    vector<pair<int, int>> res;
    while (!qu.empty())
    {
        node = qu.front();
        qu.pop();
        for (auto nei : ed[node])
        {
            if (!con[nei])
            {
                con[nei] = true;
                qu.push(nei);
                res.push_back({node, nei});
            }
        }
    }
    for (auto p : res)
        cout << p.first << " " << p.second << endl;
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