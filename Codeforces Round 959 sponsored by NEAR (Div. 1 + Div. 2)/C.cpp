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
    int len, x, s{}, count{};
    cin >> len >> x;
    int arr[len], sums[len], pos[len]{}, minus[len]{};
    for (int i{}; i < len; i++)
    {
        cin >> arr[i];
        s += arr[i];
        sums[i] = s;
    }
    count = (len * (len + 1) / 2);

    for (int i = len - 1; i >= 0; i--)
    {
        int p{};
        if (i > 0)
            p = sums[i - 1];

        int ok = lower_bound(sums, sums + len, p + x + 1) - sums;
        pos[i] = ok;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (pos[i] >= len)
            minus[i] = 0;
        else
        {
            int minus_count = 1;
            if (pos[i] + 1 < len)
                minus_count += minus[pos[i] + 1];
            minus[i] = minus_count;
        }
    }

    for (int i{}; i < len; i++)
        count -= minus[i];

    cout << count << endl;
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