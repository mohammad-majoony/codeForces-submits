// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/gymProblem/101021/1
// interavtive problem

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
// #define endl '\n'
using namespace std;

void solve()
{
    int mini = 1, maxi = 1e6, res;
    string txt;
    while (mini <= maxi)
    {
        int middle = (maxi + mini) / 2;
        cout << middle << endl;
        cin >> txt;
        if (txt == "<")     
            maxi = middle - 1;
        else 
        {
            res = middle;
            mini = middle + 1;
        }
    }
    cout << "! " << res << endl;
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