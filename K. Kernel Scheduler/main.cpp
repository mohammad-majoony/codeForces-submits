// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/gym/104785/problem/K

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
    int n, m, x, y;
    cin >> n >> m;

    vector<int> ab, ba;

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        if (x < y)
            ab.push_back(i + 1);
        else
            ba.push_back(i + 1);
    }

    int l1 = ab.size(), l2 = ba.size();

    if (l1 > l2 && l1 >= m / 2.0)
    {
        cout << "YES" << endl;
        cout << l1 << endl;
        for (auto r : ab)
            cout << r << " ";
        cout << endl
             << endl;
    }
    else if (l2 >= m / 2.0)
    {
        cout << "YES" << endl;
        cout << l2 << endl;
        for (auto p : ba)
            cout << p << " ";
        cout << endl
             << endl;
    }
    else 
        cout << "NO" << endl;
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