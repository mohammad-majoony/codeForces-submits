// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/913/B

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

int const N = 1e3 + 5;
vector<int> tr[N];

bool dfs(int i)
{
    int leafCount{};
    for (auto n: tr[i])
    {
        if (!tr[n].size())
            leafCount++;
        else
            if (!dfs(n)) 
                return false;
    }

    return leafCount >= 3;
}

void solve()
{
    int v, p;
    cin >> v;
    for (int i{2}; i <= v; ++i)
    {
        cin >> p;
        tr[p].push_back(i);
    }
    cout << ((dfs(1)) ? "Yes" : "No");
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