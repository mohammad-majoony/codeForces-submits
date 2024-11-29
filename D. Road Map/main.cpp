// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/34/D

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

int const N = 5e4 + 5;
vector<int> fa;
vector<int> ed[N];

void dfs(int cu, int par)
{   
    fa[cu] = par;
    for (auto node : ed[cu])
    {
        if (node == par)
            continue;
        dfs(node, cu);
    }
}

void solve()
{
    int n, r1, r2, num;
    cin >> n >> r1 >> r2;
    fa.resize(n + 1);

    for (int i{1}; i <= n; ++i)
    {
        if (i == r1)
            continue;
        cin >> num;
        ed[i].push_back(num);
        ed[num].push_back(i);
    }

    dfs(r2, 0);

    for (int i{1}; i <= n; ++i)
    {
        if (i == r2)
            continue;
        cout << fa[i] << " ";
    }
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