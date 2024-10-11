// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341365/problem/B

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

int const N = 1e5 + 5;
vector<int> ed[N];
int mem[N], maxi{};

int dfs1(int cu, int par)
{
    int res{};
    for (auto nei: ed[cu])
    {
        if (nei != par)
            res = max(res, 1ll + dfs1(nei, cu)); 
    }
    return mem[cu] = res;
}

void dfs2(int cu, int par, int parcount = 0)
{
    vector<int> nums = {parcount, 0};
    for (auto nei: ed[cu])
    {
        if (nei != par)
            nums.push_back(mem[nei] + 1); 
    }

    sort(nums.begin(), nums.end(), [](auto n1, auto n2){
        return n1 > n2;
    });

    maxi = max(maxi, nums[0] + nums[1]);

    for (auto nei: ed[cu])
    {
        if (nei != par)
        {
            if (nums[0] == mem[nei] + 1)
                dfs2(nei, cu, nums[1] + 1);
            else 
                dfs2(nei, cu, nums[0] + 1);
        } 
    }
}

void solve()
{
    int n, m, x, y;
    cin >> n >> m;

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dfs1(1, 0);
    dfs2(1, 0);
    cout << maxi;
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