// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1931/problem/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int len, add, minus, count{}, num;
    map<pair<int, int>, int> pa;
    cin >> len >> add >> minus;
    for (int i{}; i < len; i++)
    {
        cin >> num;
        pa[{num % add, num % minus}]++;
    }

    for (auto p : pa)
    {

        if (p.first.first == (add - p.first.first) % add)
            count += p.second * (p.second - 1);
        else 
            count += p.second * pa[{add - p.first.first, p.first.second}];

        // cout << p.first.first << " " << p.first.second << " - " << p.second << " " << count << endl;

    }
    cout << count / 2 << endl;
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