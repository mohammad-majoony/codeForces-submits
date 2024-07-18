// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1992/D

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
    int n, j, l{-1}, s, lc{-1}, jm, sm;
    string txt;
    cin >> n >> j >> s >> txt;
    for (int i{}; i <= n; i++)
    {
        if (i == n || txt[i] == 'L')
        {
            jm = i - l;
            if (j < jm)
            {
                if (lc > l)
                {
                    if (j <= lc - l)
                        return "NO";
                }
                s -= i - l - j;
                if (s < 0)
                    return "NO";
            }
            l = i;
        }
        else if (txt[i] == 'C')
            lc = i;
    }

    return "YES";
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
        cout << solve() << endl;
}