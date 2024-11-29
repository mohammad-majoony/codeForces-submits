// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1365/C

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
    int len, num, maxi{};
    cin >> len;
    int arr[len + 1];
    int left[len + 1]{}, right[len + 1]{};

    for (int i{}; i < len; ++i)
    {
        cin >> num;
        arr[num] = i;
    }

    for (int i{}; i < len; ++i)
    {
        cin >> num;
        if (i <= arr[num])
        {
            right[arr[num] - i]++;
            left[i + (len - arr[num])]++;
            maxi = max({maxi, right[arr[num] - i], left[i + (len - arr[num])]});
        }
        else
        {
            left[i - arr[num]]++;
            right[arr[num] + (len - i)]++;
            maxi = max({maxi, left[i - arr[num]], right[arr[num] + (len - i)]});
        }
    }

    cout << maxi << endl;
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