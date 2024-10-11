// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1165/D

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
    int len, num, j{0};
    bool flg{true};
    cin >> len;
    
    int arr[len]; 
    unordered_map<int, bool> div;
    for (int i{}; i < len; ++i)
    {
        cin >> arr[i];
        div[arr[i]] = true;
    }

    sort(arr, arr + len);
    num = arr[len - 1] * arr[0];

    for (int i{2}; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            if (!div[i] || !div[num / i])
                flg = false;
            j++;
            if (i != num / i)
                j++;
        }
    }

    if (!flg || j != len)
        cout << -1 << endl;
    else 
        cout << num << endl;
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