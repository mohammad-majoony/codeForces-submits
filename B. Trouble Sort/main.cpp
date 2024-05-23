// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1365/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

string solve()
{
    int len , o = 0 , z = 0 , sorted = 1 , last = 0 , num ;
    cin >> len ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(last > num) sorted = 0 ; 
        last = num ; 
    } 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(num) o++ ; 
        else z++ ; 
    }
    if(sorted || (o && z)) return "YES\n" ; 
    return "NO\n" ; 
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc ; while(tc--)
    cout << solve();
}