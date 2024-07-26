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
    int len;
    cin >> len;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == '0' && b[i] == '1')
        {
            cout << "NO\n";
            return;
        }
        if (a[i] == '0' && b[i] == '0')
            continue;
        else
            break;
    }
    cout << "YES\n";
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