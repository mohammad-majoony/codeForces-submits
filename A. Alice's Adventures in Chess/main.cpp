// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2028/problem/A

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
    int n, a, b, x = 0, y = 0;
    string txt;
    cin >> n >> a >> b >> txt;

    bool res{false};
    int i{10000}, j{};
    while (i--)
    {
        if (x == a && y == b)
            res = true;
        switch (txt[j++])
        {
            case 'N':
            y++;
            break;
            case 'E':
            x++;
            break;
            case 'S':
            y--;
            break;
            case 'W':
            x--;
            break;
        }
        j %= n;
    }
    cout << ((res) ? "YES" : "NO") << endl;
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