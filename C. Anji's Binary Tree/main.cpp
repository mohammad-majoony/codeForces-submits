// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1900/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int mem[300005][2];
string txt;
int pr;

void dfs(int i, int sum)
{
    if (!mem[i][0] && !mem[i][1])
        pr = min(pr, sum);
    if (mem[i][0]) dfs(mem[i][0], sum + ((txt[i - 1] == 'L') ? 0 : 1));
    if (mem[i][1]) dfs(mem[i][1], sum + ((txt[i - 1] == 'R') ? 0 : 1));
}

int solve()
{
    int len, x, y;
    cin >> len >> txt;

    for (int i = 0; i < len; i++)
    {
        cin >> x >> y;
        mem[i + 1][0] = x, mem[i + 1][1] = y;
    }
    pr = LONG_LONG_MAX;
    dfs(1, 0);
    return pr;
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