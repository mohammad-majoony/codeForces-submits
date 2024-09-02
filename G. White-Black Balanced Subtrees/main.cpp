// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1676/G

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

int const N = 4e3 + 5;
vector<int> ed[N];
string t;
int co;

pair<int, int> dfs(int cu)
{
    pair<int, int> res{};
    if (t[cu - 1] == 'W')
        res.first++;
    else 
        res.second++;

    for (auto node: ed[cu])
    {
        auto r = dfs(node);
        res.first += r.first;
        res.second += r.second;
    }

    co += (res.first == res.second); 

    return res;
}

void solve()
{
    int n, p;
    cin >> n;

    co = 0;
    for (int i{}; i <= n; ++i)
        ed[i].clear();

    for (int i{2}; i <= n; ++i)
    {
        cin >> p;
        ed[p].push_back(i);
    }         
    cin >> t;
    dfs(1);
    cout << co << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}