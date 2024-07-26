// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1992/problem/C

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
    int sums, len, count{};
    cin >> sums >> len;
    int a[len];
    for (int i{}; i < len; i++)
        cin >> a[i];
    sort(a, a + len);

    for (int i{}; i < len - 1; i++)
        count += a[i] * 2 - 1;
    cout << count << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}