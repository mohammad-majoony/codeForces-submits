// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1352/F

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
    int z, o, t;
    cin >> z >> o >> t;

    if (z)
        for (int i{}; i <= z; ++i)
            cout << "0";
    if (t)
        for (int i{}; i <= t; ++i)
            cout << "1";

    if (o)
    {
        bool zz;
        if (z && t)
        {
            o--;
            zz = true;
        }
        else if (z)
            zz = false;
        else if (t)
            zz = true;
        else 
        {
            zz = false;
            cout << "0";
        }

        for (int i{}; i < o; ++i)
        {
            if (zz)
                cout << "0";
            else
                cout << "1";
            zz = !zz;
        }
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
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}