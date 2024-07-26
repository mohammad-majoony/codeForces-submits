// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/126/problem/B

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
    string txt;
    cin >> txt;
    int len = txt.size();
    int dp[len + 1] = {-1}, lenPr = 0;

    for (int i = 0, j = -1; i < len; dp[++i] = ++j)
    {
        cout << i << " " << j << endl;
        while (j != -1 && txt[i] != txt[j])
        {
            j = dp[j];
            cout << i << " w " << j << endl;
        }
    }

    for (int i = 1; i < len + 1; i++)
        cout << dp[i] << " ";
    cout << endl;
    
    for (int i = 1; i < len; i++)
    {
        if (dp[i] == dp[len] || dp[i] == dp[dp[len]])
            lenPr = max(lenPr, dp[i]);
    }

    cout << (lenPr ? txt.substr(0, lenPr) : "Just a legend");
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