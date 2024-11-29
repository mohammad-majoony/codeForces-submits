// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/2033/D

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
    int len;
    cin >> len;

    int arr[len + 1]{}, sums[len + 1]{}, dp[len + 1]{};
    unordered_map<int, int> ind;
    ind.reserve(1 << 12);
    ind.max_load_factor(0.25);

    ind[0] = 1;
    for (int i{1}; i <= len; ++i)
    {
        cin >> arr[i];
        sums[i] = arr[i] + sums[i - 1];
        dp[i] = dp[i - 1]; 
        if (ind.find(sums[i]) != ind.end())
            dp[i] = max(dp[i], 1 + dp[ind[sums[i]]]);
        if (!arr[i])
            dp[i] = max(dp[i], 1 + dp[i - 1]);
        ind[sums[i]] = i;
    }

    cout << dp[len] << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}