// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1207/E

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
// #define endl '\n'
using namespace std;

int toggleBitsFromLToR(int n, int l, int r)
{
    int num = ((1ll << r) - 1) ^ ((1ll << (l - 1)) - 1);
    return (n ^ num);
}
 
int unsetBitsInGivenRange(int n, int l, int r)
{
    long num = (1ll << (4 * 8 - 1)) - 1;
    num = toggleBitsFromLToR(num, l, r);
    return (n & num);
}

int qu1()
{
    cout << "? ";
    for (int i{}; i < 100; ++i)
        cout << i << " ";
    cout << endl;
    int res;
    cin >> res;
    return res;
}

int qu2()
{
    cout << "? ";
    for (int i{1}; i <= 100; ++i)
    {
        int co = i << 7;
        cout << co << " ";
    }
    cout << endl;
    int res;
    cin >> res;
    return res;
}

void solve()
{
    int r1, r2;
    r1 = unsetBitsInGivenRange(qu1(), 1, 7);
    r2 = unsetBitsInGivenRange(qu2(), 8, 35);
    int res = r1 | r2;
    cout << "! " << res << endl;
    
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