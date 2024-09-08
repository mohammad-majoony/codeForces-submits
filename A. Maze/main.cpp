// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/377/A

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

int n, m, k;
int const N = 5e2 + 5;
string arr[N];

void dfs(int x, int y)
{
    arr[x][y] = 'U';

    if (y != m - 1 && arr[x][y + 1] == '.')
        dfs(x, y + 1);
    if (y && arr[x][y - 1] == '.')
        dfs(x, y - 1);
    if (x != n - 1 && arr[x + 1][y] == '.')
        dfs(x + 1, y);
    if (x && arr[x - 1][y] == '.')
        dfs(x - 1, y);
    
    if (k)
    {
        arr[x][y] = 'X';
        k--;
    }
}

void solve()
{
    cin >> n >> m >> k;
    for (int i{}; i < n; i++)
        cin >> arr[i];
    bool fi{false};

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            if (arr[i][j] == '.')
            {
                fi = true;
                dfs(i, j);
                break;
            }
        }
        if (fi)
            break;
    }

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            if (arr[i][j] == 'U')
                cout << ".";
            else 
                cout << arr[i][j];
        }
        cout << endl;
    }
}

int32_t main()
{
    // MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}