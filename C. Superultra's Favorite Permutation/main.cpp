// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2037/problem/C

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
    int n;
    cin >> n;

    if (n <= 4) 
    {
        cout << -1  << endl;
        return;
    }

    for (int i{1}; i <= n; i += 2)
    {
        if (i == 5)
            continue;
        cout << i << " ";
    }
    cout << 5 << " " << 4 << " ";
    for (int i{2}; i <= n; i += 2)
    {
        if (i == 4)
            continue;
        cout << i << " ";
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
    int tc ; cin >> tc; while(tc--)
    solve();
}