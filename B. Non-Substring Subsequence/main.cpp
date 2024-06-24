// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1451/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int len, q, x, y;
    string txt;
    cin >> len >> q >> txt;
    pair<int, int> pa[len + 1];
    pa[0] = make_pair(0, 0);
    for (int i = 0; i < len; i++)
        pa[i + 1] = make_pair((txt[i] == '1') ? pa[i].first + 1 : pa[i].first, (txt[i] == '0') ? pa[i].second + 1 : pa[i].second);
    while (q--)
    {
        cin >> x >> y;
        if (x > 1 && txt[x - 1] == '1' && pa[x - 1].first)
            cout << "YES\n";
        else if (x > 1 && txt[x - 1] == '0' && pa[x - 1].second)
            cout << "YES\n";
        else if (y != len && txt[y - 1] == '1' && pa[len].first > pa[y].first)
            cout << "YES\n";
        else if (y != len && txt[y - 1] == '0' && pa[len].second > pa[y].second)
            cout << "YES\n";
        else
            cout << "NO\n";
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