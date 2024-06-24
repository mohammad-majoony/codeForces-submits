// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1550/B

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
    int n, b, c, cu{1}, o{};
    string txt;
    cin >> n >> b >> c >> txt;
    if (c < 0)
    {
        for (int i = 1; i < n; i++)
        {
            if (txt[i] != txt[i - 1])
                cu++;
        }
        o += n * b + c * (cu / 2 + 1);
        return o;
    }
    else
        return n * b + n * c;
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