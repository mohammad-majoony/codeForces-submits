// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1702/E

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
bool vis[N];
vector<int> ed[N];

int dfs(int cu)
{
    vis[cu] = true;
    for (auto p : ed[cu])
        if (!vis[p])
            return dfs(p) + 1;
    return 1;
}

void solve()
{
    int len, x, y, res = true;
    cin >> len;
    vector<int> count(len + 1, 0);

    memset(vis, false, sizeof vis);
    for (int i{}; i <= len; ++i)
        ed[i].clear();
    
    for (int i{}; i < len; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y); 
        ed[y].push_back(x); 
        count[x]++, count[y]++;
        if (x == y || count[x] > 2 || count[y] > 2)
            res = false;
    }

    for (int i{1}; i <= len; ++i)
    {
        if (!vis[i])
        {
            if (dfs(i) % 2)
                res = false;
        }
    }

    cout << ((res) ? "YES" : "NO") << endl; 
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