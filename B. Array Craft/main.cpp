// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1990/B

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
    int len, x, y;
    bool turn{false};
    cin >> len >> x >> y;
    x--, y--;
    int arr[len];
    for (int i{y}; i <= x; i++)
        arr[i] = 1;

    for (int i{y - 1}; i >= 0; i--)
    {
        arr[i] = (turn) ? 1: -1;
        turn = !turn;
    }
    turn = false;
    for (int i{x + 1}; i < len; i++)
    {
        arr[i] = (turn) ? 1: -1;
        turn = !turn;
    }
    for (int i{}; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
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