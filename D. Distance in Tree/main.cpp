// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/161/D

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

int const N = 5e4 + 5, M = 5e2 + 5;
int mem[N][M], k, co{};
vector<int> ed[N];

void dfs(int cu, int par)
{
    for (auto node : ed[cu])
    {
        if (node == par)
            continue;
        dfs(node, cu);

        for (int i{1}; i < k; ++i)
        {
            if (i == 1)
                co += mem[cu][k - 1];
             
            co += mem[node][i] * mem[cu][k - i - 1];
        }

        for (int i{1}; i < M; ++i)
        {
            if (i + 1 == k)
                co += mem[node][i];
            mem[cu][i + 1] += mem[node][i];
        }
        mem[cu][1]++;
    } 
}

void solve()
{
    int len, x, y;
    memset(mem, 0, sizeof mem);
    cin >> len >> k;

    for (int i{}; i < len - 1; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }    
    if (k == 1)
    {
        cout << len - 1;
        return;
    }
    dfs(1, 0);
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