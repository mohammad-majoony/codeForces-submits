// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1490/F

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
    int len, mini, num, d, maxC{};
    cin >> len;

    unordered_map<int, int> co, sum;
    for (int i{}; i < len; ++i)
    {
        cin >> num;
        co[num]++;
    }

    for (auto [n, c] : co)
    {
        sum[c]++; 
        maxC = max(maxC, c);
    }

    mini = len;

    for (int c1{1}; c1 <= maxC; ++c1)
    {
        d = 0;
        for (auto [n, c2] : sum)
        {
            if (n < c1)
                d += c2 * n;
            else if (n > c1)
                d += c2 * (n - c1);
        }
        mini = min(mini, d);
    }
    cout << mini << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}