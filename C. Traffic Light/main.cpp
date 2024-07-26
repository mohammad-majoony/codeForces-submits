// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1744/C

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
    int len, last, maxi{-1};
    bool f{false};
    char s;
    string txt;
    cin >> len >> s >> txt;

    for (int i{}; i < len; i++)
    {
        if (!f && txt[i] == s)
        {
            last = i;
            f = true;
        }

        if (f && txt[i] == 'g')
        {
            maxi = max(maxi, i - last);
            f = false;
        }
    }

    for (int i{}; i < len && f; i++)
    {
        if (txt[i] == 'g')
        {
            maxi = max(maxi, len - last + i);
            f = false;
        }
    }

    cout << maxi << endl;
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