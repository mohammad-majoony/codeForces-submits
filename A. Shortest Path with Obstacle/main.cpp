// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1547/A

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if(a1 == a2 && a2 == a3 && ((b1 < b3 && b3 < b2) || (b1 > b3 && b3 > b2))) cout << abs(a1 - a2) + abs(b1 - b2) + 2 << endl ;  
    else if(b1 == b2 && b2 == b3 && ((a1 < a3 && a3 < a2) || (a1 > a3 && a3 > a2))) cout << abs(a1 - a2) + abs(b1 - b2) + 2 << endl ; 
    else cout << abs(a1 - a2) + abs(b1 - b2) << endl ; 
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