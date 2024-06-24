// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1984/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

string solve()
{
    string txt;
    int c{}, num;
    cin >> txt;
    if (txt[0] != '1')
        return "NO";
    for (int i = txt.size() - 1; i > 0; i--)
    {
        num = txt[i] - '0' - c;
        if (num < 0 || num > 8)
            return "NO";
        c = 1;
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