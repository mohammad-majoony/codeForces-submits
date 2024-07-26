// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

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
    int n, k;
    cin >> n >> k;
    string txt[n];
    for (int i{}; i < n; i++)
        cin >> txt[i];

    for (int i{}; i < n; i+= k)
    {
        for (int j{}; j < n; j+= k)
            cout << txt[i][j];
        cout << endl;
    }
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