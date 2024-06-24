// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1611/A

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

int solve()
{
    string n ; 
    cin >> n ; 
    int s = n.size() ;
    if((n[s - 1] - '0') % 2 == 0) return 0 ;
    else if((n[0] - '0') % 2 == 0) return 1 ;
    for(int i = 0 ; i < s ; i++){
        if((n[i] - '0') % 2 == 0) return 2 ; 
    }
    return -1 ;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc ; while(tc--)
    cout << solve() << endl;
}