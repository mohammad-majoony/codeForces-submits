// when i wrote this code, only me and god knew how it works. now only god knows...
// https://codeforces.com/problemset/problem/369/c

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define majooni ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define online_judge
#define _mod (1000000007)
#define mod(n) (((n % _mod) + _mod) % _mod)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

int const n = 1e5 + 5;
vector<pair<int, bool>> ed[n];
vector<int> con;

bool dfs(int cu, int par, bool prob)
{
    bool childp{false};
    for (auto n : ed[cu])
    {
        if (n.first == par)
            continue;
        bool res = dfs(n.first, cu, n.second);
        if (res)
            childp = true;
    }
    if (prob && !childp)
        con.emplace_back(cu);
    return prob | childp;
}

void solve()
{
    int len, x, y, t;
    cin >> len;
    for (int i{1}; i < len; ++i)
    {
        cin >> x >> y >> t;
        ed[x].push_back({y, t == 2});
        ed[y].push_back({x, t == 2});
    }
    dfs(1, 0, false);
    cout << con.size() << endl;
    for (auto n : con)  
        cout << n << " ";
}

int32_t main()
{
    majooni
#ifndef online_judge
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}