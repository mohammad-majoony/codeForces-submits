// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/873/problem/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
// #define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , maxi = 0 , o = 0 , z = 0 , num ; 
    map<ll , ll> index ; 
    string txt ; 
    cin >> len >> txt ;  

    for(ll i = 0 ; i < len ; i++){
        if(txt[i] == '1') o++ ; 
        else z++ ; 
        if(o - z == 0) maxi = max(maxi , i + 1) ;
        else if(index[o - z] == 0) index[o - z] = i + 1 ;
        else maxi = max(maxi , i + 1 - index[o - z]) ;
    }
    cout << maxi ; 
}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}