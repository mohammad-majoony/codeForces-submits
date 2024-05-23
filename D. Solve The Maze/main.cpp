// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1365/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

int n, m, res;
int mem[51][51];
vector<string> arr;
bool dfs(int i, int j)
{
    if (i == n - 1 && j == m - 1)
        return 1;
    if (~mem[i][j])
        return mem[i][j];
    int re = 0;

    if (i && arr[i - 1][j] != 'B' && arr[i - 1][j] != '#')
    {
        arr[i - 1][j] = '#';
        re |= dfs(i - 1, j);
        arr[i - 1][j] = '.';
    }
    if (j && arr[i][j - 1] != 'B' && arr[i][j - 1] != '#')
    {
        arr[i][j - 1] = '#';
        re |= dfs(i, j - 1);
        arr[i][j - 1] = '.';
    }
    if (i != n - 1 && arr[i + 1][j] != 'B' && arr[i + 1][j] != '#')
    {
        arr[i + 1][j] = '#';
        re |= dfs(i + 1, j);
        arr[i + 1][j] = '.';
    }
    if (j != m - 1 && arr[i][j + 1] != 'B' && arr[i][j + 1] != '#')
    {
        arr[i][j + 1] = '#';
        re |= dfs(i, j + 1);
        arr[i][j + 1] = '.';
    }
    return mem[i][j] = re;
}

void solve()
{
    cin >> n >> m;
    res = 1;
    memset(mem, -1, sizeof mem);
    arr.resize(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'B')
            {
                // top
                if (i && arr[i - 1][j] == '.')
                    arr[i - 1][j] = '#';
                if (i && arr[i - 1][j] == 'G')
                    res = 0;

                // right
                if (j != m - 1 && arr[i][j + 1] == '.')
                    arr[i][j + 1] = '#';
                if (j != m - 1 && arr[i][j + 1] == 'G')
                    res = 0;

                // left
                if (j && arr[i][j - 1] == '.')
                    arr[i][j - 1] = '#';
                if (j && arr[i][j - 1] == 'G')
                    res = 0;

                // bottem
                if (i != n - 1 && arr[i + 1][j] == '.')
                    arr[i + 1][j] = '#';
                if (i != n - 1 && arr[i + 1][j] == 'G')
                    res = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'G')
            {
                if (!dfs(i, j))
                    res = 0;
            }
        }
    }

    cout << ((res) ? "YES\n" : "NO\n");
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