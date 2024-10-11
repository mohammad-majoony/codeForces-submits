// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/598/D

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

int const N = 1e3 + 5;
pair<int, int> parent[N][N];
int co[N][N], n, m;
string txt[N];
vector<pair<int, int>> pos = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y, int xx, int yy)
{
    parent[x][y] = {xx, yy};
    txt[x][y] = '-'; 
    int xn, yn;

    for (auto p: pos)
    {
        xn = x + p.first, yn = y + p.second;
        if (0 <= xn && xn < n && 0 <= yn && yn < m && txt[xn][yn] != '-')
        {
            if (txt[xn][yn] == '*')
                co[xx][yy]++;
            else 
                dfs(xn, yn, xx, yy);
        }
    }
}

void solve()
{
    int k, x, y, xx, yy;
    cin >> n >> m >> k;
    memset(co, 0, sizeof co);

    for (int i{}; i < n; ++i)
        cin >> txt[i];

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            if (txt[i][j] == '.')
                dfs(i, j, i, j);
        }
    }

    while (k--)
    {
        cin >> x >> y;
        xx = parent[x - 1][y - 1].first;
        yy = parent[x - 1][y - 1].second;
        cout << co[xx][yy] << endl;
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