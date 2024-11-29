// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1742/E

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
    int n, q, last{}, num, maxi{};
    cin >> n >> q;

    int sums[n];
    vector<int> arr(n);
    for (int i{}; i < n; ++i)
    {
        cin >> sums[i];

        maxi = max(maxi, sums[i]);
        arr[i] = maxi;

        sums[i] += last;
        last = sums[i];
    }

    while (q--)
    {
        cin >> num;
        int res = upper_bound(arr.begin(), arr.end(), num) - arr.begin();

        int pr;
        if (res == n)
            pr = sums[n - 1];
        else
        {
            if (!res)
            {
                if (num < sums[res])
                    pr = 0;
                else 
                    pr = sums[res];
            }
            else if (num != arr[res])
                pr = sums[res - 1];
        }

        cout << pr << " ";
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