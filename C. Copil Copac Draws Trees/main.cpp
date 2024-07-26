// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1831/problem/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

vector<pair<int, int>> edge[200005];

int dfs(int cu, int par, int last)
{
    int res{}, v, ind; 
    for (auto e: edge[cu])
    {
        v = e.first;
        ind = e.second;
        if (v == par)
            continue;

        res = max(res, dfs(v, cu, ind) + (ind < last));
    }
    return res;
}

void solve()
{
    int n, x, y;
    cin >> n;

    for (int i{1}; i <= n; i++)
        edge[i].clear();

    for (int i{}; i < n - 1; i++)
    {
        cin >> x >> y;
        edge[x].push_back({y, i + 1});
        edge[y].push_back({x, i + 1});
    }
    cout << dfs(1, 0, n + 1) << endl;

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
