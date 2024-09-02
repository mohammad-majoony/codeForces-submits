// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/295/B

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
    int len, sums;
    cin >> len;
    int dp[len][len], xi[len];

    for (int i{}; i < len; ++i)
        for (int j{}; j < len; ++j)
            cin >> dp[i][j];

    for (int i{}; i < len; ++i)
    {
        cin >> xi[i];
        xi[i]--;
    }

    stack<int> res;
    for (int k{len - 1}; k >= 0; --k)
    {
        for (int i{}; i < len; ++i)
            for (int j{}; j < len; ++j)
                dp[i][j] = min(dp[i][j], dp[i][xi[k]] + dp[xi[k]][j]);

        sums = 0;
        for (int i{len - 1}; i >= k; --i)
            for (int j{len - 1}; j >= k; --j)
                sums += dp[xi[i]][xi[j]];

        res.push(sums);
    }
    while (!res.empty())
    {
        cout << res.top() << " ";
        res.pop();
    }
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}