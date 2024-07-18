// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1926/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

string solve()
{
    int n; 
    cin >> n; 
    string st[n];
    for (int i{}; i < n; i++)
        cin >> st[i];
    
    for (int i{}; i < n; i++)
    {
        for (int j{}; j < n; j++)
        {
            if (st[i][j] == '1')
            {
                if (st[i][j + 1] == '1' && st[i + 1][j] == '1') 
                    return "SQUARE";
                else 
                    return "TRIANGLE";
            }
        }

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
    cout << solve() << endl;
}