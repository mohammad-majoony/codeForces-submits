// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1970/problem/C2

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

bool dfs(int cu, int par)
{
    bool res{false};
    for (auto node : ed[cu])
    {
        if (node == par)
            continue;
        res |= !dfs(node, cu); 
    }
    return res;
}

void solve()
{
    int len, t, x, y;
    cin >> len >> t;

    for (int i{}; i < len - 1; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y); 
        ed[y].push_back(x); 
    }
    cin >> t;
    cout << ((dfs(t, -1)) ? "Ron" : "Hermione") << endl;
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