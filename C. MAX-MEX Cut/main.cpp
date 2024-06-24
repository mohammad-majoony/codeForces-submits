// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1566/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int c{}, len;
    bool o, z;
    string a, b;
    cin >> len >> a >> b;
    for (int i = 0; i < len; i++)
    {
        
        if(a[i] == '1') o = true;
        else z = true;
        if(b[i] == '1') o = true;
        else z = true;

        if(o && z){
            o = z = false;
            c += 2;
        }
        else if(z){
            if(i != len - 1 && a[i + 1] == '1' && b[i + 1] == '1') continue;
            z = false;
            c++;
        }
    }
    cout << c << endl;
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
        solve();
}