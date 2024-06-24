// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1732/B

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
    int len , count{0};
    char c = '0';
    string txt;
    cin >> len >> txt;
    for(int i = 0 ; i < len ; i++){
        if(txt[i] != c){
            c = ((c == '0') ? '1' : '0') ;
            count++;
        }
    }
    if(count > 1) cout << --count << endl;  
    else cout << 0 << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc ; while(tc--)
    solve();
}