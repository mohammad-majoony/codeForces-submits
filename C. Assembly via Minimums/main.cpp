// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1857/problem/C

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
    int n, len;
    cin >> n;
    len = n * (n - 1) / 2;
    int arr[len];

    for (int i{}; i < len; i++)
       cin >> arr[i];
    sort(arr, arr + len);

    for (int i{}; n != 1; i += n)
    {
        n--;
        cout << arr[i] << " ";
    }
    cout << 1000000000 << endl;
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
