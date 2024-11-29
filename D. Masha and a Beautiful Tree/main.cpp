// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1741/D

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

int const N = 1e6;
int arr[N];

int merge(int l, int r)
{
    // base case
    if (l == r || r < l)
        return 0;
    
    // recursive case
    int maxl{}, maxr{}, mid = (l + r) / 2;
    for (int i{l}; i <= mid; ++i)
        maxl = max(maxl, arr[i]);
    for (int i{mid + 1}; i <= r; ++i)
        maxr = max(maxr, arr[i]);

    if (maxl > maxr)
    {
        for (int i{l}, j{}; i <= mid; ++i, j++)
            swap(arr[i], arr[mid + 1 + j]);
    } 

    return (maxl > maxr) + merge(l, mid) + merge(mid + 1, r);
}
void solve()
{
    int len;
    cin >> len; 
    for (int i{}; i < len; ++i)
        cin >> arr[i];
    
    int ans = merge(0, len - 1);
    for (int i{1}; i < len; ++i)
    {
        if (arr[i] < arr[i - 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
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