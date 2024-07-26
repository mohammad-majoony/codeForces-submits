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
    int m, s, bm, cm ,count{};
    cin >> m >> s;

    for (int a = 1; a <= s; a++)
    {
        bm = min(s - a, m / a);
        for (int b = 1; b <= bm; b++)
        {
            cm = min(s - a - b, (m - a * b) / (a + b));
            if (cm > 0)
                count += cm;
        }
    }
    cout << count << "\n";
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