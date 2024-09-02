// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1931/F

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
int vis[N];
bool res;

void dfs(int cu)
{
    vis[cu] = 1;
    for (auto n : ed[cu])
    {
        if (!vis[n])
            dfs(n);
        else if (vis[n] == 1)
            res = false;
    }
    vis[cu] = 2;
}

void solve()
{
    res = true;
    memset(vis, 0, sizeof vis);

    int len, k, x, last;
    cin >> len >> k;

    for (int i{}; i <= len; ++i)
        ed[i].clear();

    for (int i{}; i < k; ++i)
    {
        cin >> x;
        for (int i{}; i < len - 1; ++i)
        {
            cin >> x;
            if (i)
                ed[last].push_back(x);
            last = x; 
        }
    }

    for (int i{1}; i <= len; ++i)
        if (!vis[i])
            dfs(i);
    cout << ((res) ? "YES" : "NO") << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}