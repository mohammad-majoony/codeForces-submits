// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1985/H1

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

int n, m;
vector<string> t;
vector<vector<pair<int, int>>> pr;
vector<vector<int>> sp;

void dfs(int x, int y, int xp, int yp)
{
    t[x][y] = '*';
    if (!~xp && !~yp)
        xp = x, yp = y;

    pr[x][y] = {xp, yp};
    sp[xp][yp]++;

    if (y + 1 < m && t[x][y + 1] == '#')
        dfs(x, y + 1, xp, yp);
    if (y - 1 >= 0 && t[x][y - 1] == '#')
        dfs(x, y - 1, xp, yp);
    if (x - 1 >= 0 && t[x - 1][y] == '#')
        dfs(x - 1, y, xp, yp);
    if (x + 1 < n && t[x + 1][y] == '#')
        dfs(x + 1, y, xp, yp);
}

void solve()
{
    cin >> n >> m;
    pr.clear();
    sp.clear();
    pr.resize(n, vector<pair<int, int>>(m));
    sp.resize(n, vector<int>(m, 0));
    t.resize(n);

    for (int i{}; i < n; ++i)
        cin >> t[i];

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            if (t[i][j] == '#')
                dfs(i, j, -1, -1);
        }
    }

    int maxi{};

    for (int i{}; i < n; ++i)
    {
        set<pair<int, int>> p;
        int count{};
        for (int j{}; j < m; ++j)
        {
            if (t[i][j] == '.')
                count++;
            if (t[i][j] == '*')
                p.insert(pr[i][j]);
            if (j + 1 < m && t[i][j + 1] == '*')
                p.insert(pr[i][j + 1]);
            if (j - 1 >= 0 && t[i][j - 1] == '*')
                p.insert(pr[i][j - 1]);
            if (i - 1 >= 0 && t[i - 1][j] == '*')
                p.insert(pr[i - 1][j]);
            if (i + 1 < n && t[i + 1][j] == '*')
                p.insert(pr[i + 1][j]);
        }
        for (auto n : p)
            count += sp[n.first][n.second];
        maxi = max(maxi, count); 
    }

    for (int j{}; j < m; ++j)
    {
        set<pair<int, int>> p;
        int count{};
        for (int i{}; i < n; ++i)
        {
            if (t[i][j] == '.')
                count++;
            if (t[i][j] == '*')
                p.insert(pr[i][j]);
            if (j + 1 < m && t[i][j + 1] == '*')
                p.insert(pr[i][j + 1]);
            if (j - 1 >= 0 && t[i][j - 1] == '*')
                p.insert(pr[i][j - 1]);
            if (i - 1 >= 0 && t[i - 1][j] == '*')
                p.insert(pr[i - 1][j]);
            if (i + 1 < n && t[i + 1][j] == '*')
                p.insert(pr[i + 1][j]);
        }
        for (auto n : p)
            count += sp[n.first][n.second];
        maxi = max(maxi, count); 
    }

    cout << maxi << endl;
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