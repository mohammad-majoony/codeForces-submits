// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1985/D

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
    int a, b, co{};
    cin >> a >> b;
    string txt[a];
    for (int i = 0; i < a; i++)
        cin >> txt[i];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (txt[i][j] == '#' && (!i || txt[i - 1][j] == '.') && (i == a - 1 || txt[i + 1][j] == '.'))
            {
                for (int k = j; k < b; k++)
                    if (txt[i][k] == '#')
                        co++;
                cout << i + 1 << " " << j + 1 + co / 2 << endl;
                return;
            }
        }
    }
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