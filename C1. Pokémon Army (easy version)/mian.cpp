// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1420/C1

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len , q , add = 0 , mines = 0 , ac , mc , num ; 
    cin >> len >> q ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        ac = max(num , num + mines) ;
        mc = max(-1 * num , -1 * num + add) ;
        add = max(add , ac) ; 
        mines = max(mines , mc) ; 
    }
    cout << max(add , mines) << endl ; 
}e

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}