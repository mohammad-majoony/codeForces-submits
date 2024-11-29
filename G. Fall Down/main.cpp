// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1669/G

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

int const N = 5e1 + 5;
string arr[N];
int n, m;

int dfs(int i, int j)
{
    int xx = i + 1;
    if (xx < n && arr[xx][j] == '.')
        return dfs(xx, j);
    else 
        return i;
}

void solve()
{
    cin >> n >> m;

    for (int i{}; i < n; ++i)
        cin >> arr[i];

    for (int i{n - 2}; i >= 0; --i)
    {
        for (int j{}; j < m; ++j)
        {
            if (arr[i][j] == '*')
            {
                int xx = dfs(i, j);
                swap(arr[i][j], arr[xx][j]);
            }
        }
    }

    for (int i{}; i < n; ++i)
        cout << arr[i] << endl;
    cout << endl;
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