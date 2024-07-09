// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1980/B

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
    int len, f, k, l;
    bool y{false},n{false};
    cin >> len >> f >> k;
    int arr[len];
    for (int i = 0; i < len; i++) cin >> arr[i];
    l = arr[f - 1];
    sort(arr , arr + len, [](auto n1, auto n2){
        return n1 > n2;
    });
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == l && i + 1 <= k) y = true;
        if (arr[i] == l && i + 1 > k) n = true;
    }
    cout << ((y&&n) ? "MAYBE\n" : ((y) ? "YES\n" : "NO\n"));
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