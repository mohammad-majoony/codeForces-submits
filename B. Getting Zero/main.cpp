// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1661/B
int const N = 32768;

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define ONLINE_JUDGE
#define _MOD (N)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int len, num, mini;

    cin >> len;
    for (int i{}; i < len; i++)
    {
        cin >> num;
        mini = INT_MAX;
        for (int i{}; i <= 15; i++)
        {
            for (int j{}; j <= 15; j++)
            {
                if (MOD((num + i) << j) == 0)
                    mini = min(mini, i + j);
            }

        }
        cout << mini << " ";
    }
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