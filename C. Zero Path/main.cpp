// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1695/C

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

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m], mini[n][m], maxi[n][m];

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            cin >> arr[i][j];
            mini[i][j] = maxi[i][j] = arr[i][j];
        }
    }

    for (int i{1}; i < n; ++i)
        mini[i][0] = maxi[i][0] = arr[i][0] = arr[i][0] + arr[i - 1][0];

    for (int j{1}; j < m; ++j)
        mini[0][j] = maxi[0][j] = arr[0][j] = arr[0][j] + arr[0][j - 1];

    for (int i{1}; i < n; ++i)
    {
        for (int j{1}; j < m; ++j)
        {
            mini[i][j] +=  min(mini[i - 1][j], mini[i][j - 1]);
            maxi[i][j] +=  max(maxi[i - 1][j], maxi[i][j - 1]);
        }
    }

    n--, m--;
    if (mini[n][m] > 0 || maxi[n][m] < 0 || maxi[n][m] % 2)
        cout << "NO" << endl;
    else 
        cout << "YES" << endl;
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