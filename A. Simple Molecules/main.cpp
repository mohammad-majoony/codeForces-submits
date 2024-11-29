// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341368/problem/A

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

int const N = 3;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sums = a + b + c;

    if (sums % 2 == 0)
    {
        int tmp = sums / 2;
        if (tmp - a >= 0 && tmp - b >= 0 && tmp - c >= 0)
        {
            cout << tmp - c << " " << tmp - a << " " << tmp - b;
            exit(0);
        }
    }
    cout << "Impossible";

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