// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1984/C1

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
    int len;
    cin >> len;
    int arr[len + 1], dp[len + 1][2];
    dp[0][0] = dp[0][1] = 0;

    for (int i{1}; i <= len; ++i)
        cin >> arr[i];
    

    for (int i{1}; i <= len; ++i)
    {
        dp[i][0] = min({dp[i - 1][0] + arr[i], dp[i - 1][1] + arr[i], abs(dp[i - 1][0] + arr[i]), abs(dp[i - 1][1] + arr[i])});
        dp[i][1] = max({dp[i - 1][0] + arr[i], dp[i - 1][1] + arr[i], abs(dp[i - 1][0] + arr[i]), abs(dp[i - 1][1] + arr[i])});
    }

    cout << max(dp[len][0], dp[len][1]) << endl;
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