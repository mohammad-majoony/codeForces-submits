// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1923/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

string solve()
{
    int len, k, c{};
    cin >> len >> k;
    pair<int, int> mons[len];
    for (int i = 0; i < len; i++)
        cin >> mons[i].second;
    for (int i = 0; i < len; i++)
    {
        cin >> mons[i].first;
        mons[i].first = abs(mons[i].first);
    }
    sort(mons, mons + len);
    for (int i = 0; i < len; i++)
    {
        c += mons[i].second;
        if (k * mons[i].first < c) return "No";
    }
    return "Yes";
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