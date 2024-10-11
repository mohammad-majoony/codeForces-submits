// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341364/problem/C

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
string t[N];
int n, m, x, y;
bool vis[N][N][5][3];

// 0 = noCu, 1 = right, 2 = bottom, 3 = left, 4 = up
void dfs(int x, int y, int cu = 0, int turns = 0)
{
    if (turns > 2)
        return;

    if (t[x][y] == 'T')
    {
        cout << "YES";
        exit(0);
    }

    vis[x][y][cu][turns] = true;

    if (y + 1 < m && t[x][y + 1] != '*')
    {
        if ((cu == 1 || !cu) && !vis[x][y + 1][1][turns])
            dfs(x, y + 1, 1, turns);
        else if (!vis[x][y + 1][1][turns + 1])
            dfs(x, y + 1, 1, turns + 1);
    }
    if (y - 1 >= 0 && t[x][y - 1] != '*')
    {
        if ((cu == 3 || !cu) && !vis[x][y - 1][3][turns])
            dfs(x, y - 1, 3, turns);
        else if (!vis[x][y - 1][3][turns + 1])
            dfs(x, y - 1, 3, turns + 1);
    }

    if (x + 1 < n && t[x + 1][y] != '*')
    {
        if ((cu == 2 || !cu) && !vis[x + 1][y][2][turns])
            dfs(x + 1, y, 2, turns);
        else if (!vis[x + 1][y][2][turns + 1])
            dfs(x + 1, y, 2, turns + 1);
    }
    if (x - 1 >= 0 && t[x - 1][y] != '*')
    {
        if ((cu == 4 || !cu) && !vis[x - 1][y][4][turns])
            dfs(x - 1, y, 4, turns);
        else if (!vis[x - 1][y][4][turns + 1])
            dfs(x - 1, y, 4, turns + 1);
    }
}

void solve()
{
    cin >> n >> m;

    for (int i{}; i < n; ++i)
        cin >> t[i];

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            if (t[i][j] == 'S')
                x = i, y = j;
        }
    }

    dfs(x, y);
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