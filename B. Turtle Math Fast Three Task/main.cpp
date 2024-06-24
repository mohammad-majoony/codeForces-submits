// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1933/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

int solve()
{
    int len, sum = 0, o = 0, t = 0, num, r;
    cin >> len ;
    for (int i = 0; i < len; i++)
    {
        cin >> num;
        sum += num;
        if (num % 3 == 1)
            o++;
        if (num % 3 == 2)
            t++;
    }
    r = sum % 3;
    if (!r)
        return 0;
    if (r == 2)
        return 1;
    if(o) return 1 ; 
    return 2 ;
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