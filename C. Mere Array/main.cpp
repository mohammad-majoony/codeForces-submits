// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1401/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

string solve()
{
    int len;
    cin >> len;
    int arr[len], sor[len], div;

    for (int i{}; i < len; i++)
    {
        cin >> arr[i];
        sor[i] = arr[i];
    }

    sort(sor, sor + len);

    for (int i{}; i < len; i++)
    {
        if (arr[i] != sor[i] && arr[i] % sor[0])
            return "NO\n";
    }

    return "YES\n";
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
        cout << solve();
}