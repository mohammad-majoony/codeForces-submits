// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1997/D

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
vector<int> points;
vector<int> ed[N];

void dfs(int cu)
{
    int mini = LLONG_MAX;

    if (!ed[cu].size()) 
        return;

    for (auto n : ed[cu])
    {
        dfs(n);
        mini = min(mini, points[n]);
    }

    if (cu == 1)
        points[cu] += mini;
    else if (points[cu] >= mini)
        points[cu] = mini;
    else
        points[cu] = (points[cu] + mini) / 2;
}

void solve()
{
    int n, num;
    cin >> n;
    points.resize(n + 1);
    for (int i{1}; i <= n; ++i)
    {
        ed[i].clear();
        cin >> points[i];
    }

    for (int i{2}; i <= n; ++i)
    {
        cin >> num;
        ed[num].push_back(i);
    }
    dfs(1);
    cout << points[1] << endl;
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