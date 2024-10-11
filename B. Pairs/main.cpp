// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1169/B

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

int const N = 3e5 + 15;
int deg[N]{0}, n1, n2, n, m, x, y;
map<pair<int, int>, int> same;

bool exist(int i, int n)
{
    if (i != n)
    {
        int sums = deg[n] + deg[i] - same[{min(n, i), max(n, i)}];
        if (sums == m)
            return true;
    }
    return false;
}

void solve()
{
    cin >> n >> m;

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        deg[x]++, deg[y]++;
        if (!i)
            n1 = x, n2 = y;
        same[{min(x, y), max(x, y)}]++;
    }

    for (int i{1}; i <= n; ++i)
    {
        bool res = exist(i, n1) | exist(i, n2);
        if (res)
        {
            cout << "YES";
            return;
        } 
    }
    cout << "NO";
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