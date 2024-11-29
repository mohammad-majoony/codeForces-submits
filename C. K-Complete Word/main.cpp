// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1332/C

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

void solve()
{
    int len, k;
    cin >> len >> k;

    string txt;
    cin >> txt;

    int co[k], maxi[k], dp[k][26];
    bool get[len];
    memset(dp, 0, sizeof dp);
    memset(get, false, sizeof get);

    for (int i{}; i < k; ++i)
    {
        co[i] = maxi[i] = 0;
        for (int j{i}; j < len; j += k)
        {
            if (get[j])
                continue;
            dp[i][txt[j] - 'a']++;
            co[i]++;
            maxi[i] = max(maxi[i], dp[i][txt[j] - 'a']);
            get[j] = true;
        }

        for (int j{len - i - 1}; j >= 0; j -= k)
        {
            if (get[j])
                continue;
            dp[i][txt[j] - 'a']++;
            co[i]++;
            maxi[i] = max(maxi[i], dp[i][txt[j] - 'a']);
            get[j] = true;
        }
    }

    int res{};
    for (int i{}; i < k; ++i)
        res += co[i] - maxi[i];

    cout << res << endl;
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