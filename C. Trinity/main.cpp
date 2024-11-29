// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2032/problem/C

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
    int arr[len];

    for (int i{}; i < len; ++i)
        cin >> arr[i];
    sort(arr, arr + len);

    int count{LLONG_MAX}, l, r, m, c;
    for (int i{}; i < len; ++i)
    {
        l = i + 1, r = len - 1, c = l;
        while (l <= r) 
        {
            m = (l + r) / 2;
            if (arr[i] + arr[i + 1] <= arr[m])
                r = m - 1;
            else 
            {
                l = m + 1;
                c = m;
            }
        }
        count = min(count, len - (c - i + 1));
    }

    cout << count << endl;
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