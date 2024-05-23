// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/330/B

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
    int v, e, x, y, w;
    cin >> v >> e;
    map<int, bool> way;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        way[x] = way[y] = true;
    }

    for (int i = 1; i <= v; i++)
    {
        if (!way[i])
        {
            w = i;
            break;
        }
    }
    cout << v - 1 << endl;
    for (int i = 1; i <= v; i++)
    {
        if (i != w)
            cout << i << " " << w << endl;
    }
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc ; while(tc--)
    solve();
}