// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1692/E

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
    int n, k, sums{}, count;
    cin >> n >> k;
    int arr[n], left[n + 1]{false}, right[n + 1]{false};

    for (int i{}; i < n; ++i)
    {
        cin >> arr[i];
        sums += arr[i];
    }

    count = 0;
    for (int i{}; i < n; ++i)
    {
        if (arr[i])
        {
            count++;
            left[count] = i + 1;
        }
    }

    count = 0;
    for (int i{n - 1}; i >= 0; --i)
    {
        if (arr[i])
        {
            count++;
            right[count] = n - i;
        }
    }

    if (k > sums)
        cout << -1 << endl;
    else
    {
        int mini = LLONG_MAX;
        for (int i{}; i <= sums - k; ++i)
            mini = min(mini, left[i] + right[sums - k - i]);
        cout << mini << endl;
    }
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