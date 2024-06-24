// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1970/C1

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

map<int, vector<int>> edge;
bool vis[200005];

int dfs(int cu)
{
    vis[cu] = true;
    int res{};
    for (auto p : edge[cu])
    {
        if (!vis[p])
            res += dfs(p);
    }
    return 1 + res;
}

string solve()
{
    int len, k, x, y, q;
    cin >> len >> k;
    for (int i = 0; i < len - 1; i++)
    {
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    cin >> q;
    vis[q] = true ;
    for (auto p : edge[q])
    {
        if (dfs(p) % 2)
            return "Ron";
    }
    return "Hermione";
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc ; while(tc--)
    cout << solve();
}