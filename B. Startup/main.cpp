// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2036/problem/B 

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
    int len, k, ind, cost, count{};
    cin >> len >> k;
    int arr[k + 1];
    memset(arr, 0, sizeof arr);

    for (int i{}; i < k; ++i)
    {
        cin >> ind >> cost;
        arr[ind] += cost;
    } 
    sort(arr, arr + k + 1);

    for (int i{k}; i >= 0 && len; --i, --len)
        count += arr[i];

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