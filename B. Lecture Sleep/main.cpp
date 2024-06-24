// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/961/B

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
    int len, k, sums{}, maxi{}, cu{};
    cin >> len >> k;
    int po[len], aw[len];
    for (int i = 0; i < len; i++)
        cin >> po[i];
    for (int i = 0; i < len; i++)
    {
        cin >> aw[i];
        if (aw[i] == 1)
            sums += po[i];
        else
            cu += po[i];
        if (i - k >= 0 && !aw[i - k])
            cu -= po[i - k];
        maxi = max({maxi, cu});
    }
    cout << sums + maxi;
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