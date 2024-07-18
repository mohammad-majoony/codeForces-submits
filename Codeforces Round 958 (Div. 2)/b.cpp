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
    int len, o{}, z{};
    string t;
    cin >> len >> t;
    for (int i{}; i < len; i++)
    {
        if (t[i] == '1')
            o++;
        else if (t[i] == '0' && (!i || t[i - 1] == '1'))
            z++;

        if (z && o > z && (i == len - 1 || t[i + 1] != '0'))
        {
            o = 1;
            z = 0;
        }
    }
    cout << ((o > z) ? "Yes" : "No");
    cout << endl;
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