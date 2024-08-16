// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1336/A

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
vector<pair<int, int>> nodes;

int dfs(int cu, int par, int dep)
{
    int childCount{};
    for (auto n: ed[cu])
    {
        if (n == par) 
            continue;
        childCount += 1 + dfs(n, cu, dep + 1);
    } 
    nodes.push_back({dep, childCount});
    return childCount;
}

void solve()
{
    int n, k, x , y, co{};
    cin >> n >> k;
    for (int i{1}; i < n; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dfs(1, -1, 0);
    sort(nodes.begin(), nodes.end(), [](auto n1, auto n2){
            return n1.first - n1.second > n2.first - n2.second;
    });

    for (auto no: nodes)
    {
        co = co + no.first - no.second;
        if (--k == 0)
            break;
    }
    cout << co;
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