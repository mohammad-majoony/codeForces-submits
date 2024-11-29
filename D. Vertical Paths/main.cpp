// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1675/D

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
vector<vector<int>> res(N);
int ind;

void dfs(int cu)
{
    res[ind].push_back(cu);

    for (auto nei: ed[cu])
        dfs(nei);
    
    if (!ed[cu].size())
        ind++;
}

void solve()
{
    int n, num, root{};
    cin >> n;
    ind = 0;

    for (int i{1}; i <= n; ++i)
    {
        cin >> num;
        if (num == i)
        {
            root = num;
            continue;
        }
        ed[num].push_back(i);
    }

    dfs(root);

    cout << ind << endl;
    for (int i{}; i < ind; ++i)
    {
        cout << res[i].size() << endl;
        for (auto node: res[i])
            cout << node << " ";
        cout << endl; 
        res[i].clear();
    }
    cout << endl; 

    for (int i{1}; i <= n; ++i)
        ed[i].clear();
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
//    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}