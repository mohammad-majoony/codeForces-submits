// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1178/B

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
    string txt;
    int cuV{}, vCount{}, add{}, c{};

    cin >> txt;
    for (int i{1}; i < txt.size(); ++i)
    {
        if (txt[i] == 'o')
        {
            vCount += cuV;
            cuV = 0;
            add += vCount;
        }
        if (txt[i] == txt[i - 1] && txt[i] == 'v')
        {
            cuV++;
            c += add;
        }
    }
    cout << c;
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