// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1934/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

int arr[5] = {1, 3, 6, 10, 15};
int mem[50];
int dp(int i)
{
    if (!i)
        return 0;
    if (i < 0)
        return 1005;
    if (~mem[i])
        return mem[i];
    int res{1005};
    for (auto l : arr)
        if (l <= i)
            res = min(res, 1 + dp(i - l));
    return mem[i] = res;
}

int solve()
{
    int num, c{}, d{};
    cin >> num;
    c = num / 15;
    d = num % 15;
    if (c)
    {
        c--;
        d += 15;
    }
    c += dp(d);
    return c;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    memset(mem, -1, sizeof mem);
    int tc;
    cin >> tc;
    while (tc--)
        cout << solve() << endl;
}