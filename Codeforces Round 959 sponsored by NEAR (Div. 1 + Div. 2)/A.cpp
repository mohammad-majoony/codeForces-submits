// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i{}; i < n; i++)
    {
        for (int j{}; j < m; j++)
            cin >> a[i][j];
    }

    if (n == 1 && m == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (n == 1)
    {
        cout << a[0][m - 1] << " ";
        for (int i{}; i < m - 1; i++)
            cout << a[0][i] << " ";
        cout << endl;
        return;
    }

    for (int i{}; i < m; i++)
        cout << a[n - 1][i] << " ";
    cout << endl;

    for (int i{}; i < n - 1; i++)
    {
        for (int j{}; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}