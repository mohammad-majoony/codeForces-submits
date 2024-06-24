// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1971/E

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
    int len, k, q, d;
    cin >> len >> k >> q;
    vector<int> a(k + 1), b(k + 1);
    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    while (q--)
    {
        cin >> d;
        int lw = lower_bound(a.begin(), a.end(), d) - a.begin();
        if (a[lw] != d)
            lw--;
        if (lw == k)
        {
            cout << b[k] << " ";
            continue;
        }
        int ans = b[lw];
        d -= a[lw];
        int dis = a[lw + 1] - a[lw];
        int speed = b[lw + 1] - b[lw];
        ans += d * speed / dis ; 
        cout << ans << " ";
    }
    cout << endl;
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