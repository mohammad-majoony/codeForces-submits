// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1245/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int const N = 1e5 + 5;
string txt;
int len;
int mem[N];

int dp(int i)
{
    if (i >= len)
        return 1;
    if (~mem[i])
        return mem[i];

    int res{};
    if ((txt[i] == 'n' || txt[i] == 'u') && i && txt[i] == txt[i - 1])
        res += dp(i + 2);
    res += dp(i + 1); 

    return mem[i] = MOD(res);
}

void solve()
{
    cin >> txt;
    len = txt.size();
    for (auto c: txt)
    {
        if (c == 'm' || c == 'w')
        {
            cout << 0;
            return;
        }
        
    }
    memset(mem, -1, sizeof mem);
    cout << dp(0);
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