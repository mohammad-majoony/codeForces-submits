// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1359/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int a, b, o, t, c{};
    cin >> a >> b >> o >> t;
    string txt;
    for (int j = 0; j < a; j++)
    {
        cin >> txt;
        int i{};
        while (i < b)
        {
            if (txt[i] == '*')
            {
                i++;
                continue;
            }
            if (i + 1 != b && txt[i + 1] != '*')
            {
                if (o * 2 > t)
                    c += t;
                else
                    c += o * 2;
                i++;
            }
            else
                c += o;
            i++;
        }
    }
    cout << c << endl;
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