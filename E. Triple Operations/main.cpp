// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1999/E

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

int const N = 2e5 + 1;
int dp[N];
void dpCalculator()
{
    dp[0] = 0;
    for (int i{1}; i < N; ++i)
        dp[i] = 1 + dp[i / 3];
}

void solve()
{
    int l, r, co{};
    cin >> l >> r;
    co += dp[l] * 2;
    for (int i{l + 1}; i <= r; ++i)
        co += dp[i];
    cout << co << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    dpCalculator();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}