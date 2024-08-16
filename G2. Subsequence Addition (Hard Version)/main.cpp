// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1807/G2

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

int const N = 2e5 + 5;
string solve()
{
    int len, sums{1};
    cin >> len;
    int arr[len];
    for (int i{}; i < len; ++i)
        cin >> arr[i];
    sort(arr, arr + len);

    if (arr[0] != 1)
        return "NO";
    
    
    for (int i{1}; i < len; ++i)
    {
        if (sums < arr[i])
            return "NO";
        sums += arr[i]; 
    }
    return "YES";
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
        cout << solve() << endl;
}