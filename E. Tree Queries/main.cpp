// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1328/E

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
int dep[N]{0}, topoIN[N], topoOUT[N], parent[N], counter{0};

void dfs(int cu, int par)
{
    dep[cu] = dep[par] + 1;
    parent[cu] = par;

    topoIN[cu] = ++counter;
    for (auto p : ed[cu])
    {
        if (p != par)
            dfs(p, cu);
    }
    topoOUT[cu] = ++counter;
}

void solve()
{
    int n, q, x, y, co, num;
    cin >> n >> q;

    for (int i{}; i < n - 1; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dfs(1, 0);

    while(q--)
    {
        int depmax = 0;
        cin >> co;
        vector<int> nums(co);

        for(int i{}; i < co; ++i)
        {
            cin >> nums[i];
            if (dep[depmax] < dep[nums[i]])
                depmax = nums[i];
        }

        for (int i{}; i < co; ++i)
        {
            if (parent[nums[i]] && nums[i] != depmax)
                nums[i] = parent[nums[i]];
        }

        bool res{true};
        for (int i{}; i < co; ++i)
            res &= topoIN[nums[i]] <= topoIN[depmax] && topoOUT[nums[i]] >= topoOUT[depmax];
        
        cout << ((res) ? "YES" : "NO") << endl;
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