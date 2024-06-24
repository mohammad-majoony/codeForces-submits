// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1036/problem/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

string a, b;
int l1, l2;
int mem[20][2][2][3];

int dp(int i, bool l, bool r, int count)
{
    if (i == l2)
        return 1;
    if (~mem[i][l][r][count])
        return mem[i][l][r][count];
    int res{0};
    for (int j = 0; j <= 9; j++)
    {
        if ((!count && j) || (j < (a[i] - '0') && l) || (j > (b[i] - '0') && r))
            continue;

        res += dp(i + 1, (l && j == (a[i] - '0')) ? true : false, (r && j == (b[i] - '0')) ? true : false, (j) ? count - 1 : count);
    }
    return mem[i][l][r][count] = res;
}

void solve()
{
    cin >> a >> b;
    l1 = a.size(), l2 = b.size();
    memset(mem, -1, sizeof mem);
    while (l1 < l2)
    {
        a = "0" + a;
        l1 = a.size();
    }
    cout << dp(0, true, true, 3) << endl;
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