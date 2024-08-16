// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

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
    int r1, l1, r2, l2, co{};
    cin >> l1 >> r1 >> l2 >> r2;

    int mix = min(r1, r2) - max(l1, l2);
    int arr[110]{};

    if (l1 < l2)
        arr[l2 - 1] = 1;
    if (l2 < l1)
        arr[l1 - 1] = 1;
    if (r2 > r1)
        arr[r1] = 1;
    if (r1 > r2) 
        arr[r2] = 1;
    
    for (int i{1}; i < 110; i++)
        co += arr[i];
    
    if (mix < 0)
        co = 0;

    cout << max(1ll, co + max(0ll, min(r1, r2) - max(l1, l2))) << endl; 
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