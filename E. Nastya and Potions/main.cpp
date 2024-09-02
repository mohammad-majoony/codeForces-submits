// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1851/E

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
int mem[N];
vector<int> ed[N], cost;

void dfs(int cu)
{
    if (~mem[cu])
        return;

    int s{};
    for (auto node : ed[cu])
    {
        dfs(node);
        s += mem[node];
    }

    if (ed[cu].size())
        mem[cu] = min(s, cost[cu]);
    else
        mem[cu] = cost[cu];
}

void solve()
{
    int len, p, num;
    cin >> len >> p;

    cost.resize(len + 1);
    memset(mem, -1, sizeof mem);
    for (int i{}; i <= len; ++i)
        ed[i].clear();

    for (int i{1}; i <= len; ++i)
        cin >> cost[i];

    for (int i{1}; i <= p; ++i)
    {
        cin >> num;
        cost[num] = 0;
    }

    for (int i{1}; i <= len; ++i)
    {
        cin >> p;
        for (int j{1}; j <= p; ++j)
        {
            cin >> num;
            ed[i].push_back(num);
        }
    }


    for (int i{1}; i <= len; ++i)
    {
        dfs(i);
        cout << mem[i] << " ";
    }
    cout << endl;
    
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