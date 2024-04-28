// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/474/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , k , a , b ;
    cin >> len >> k ; 
    vector<ll> dp(100002 , 1) ; 
    for(ll i = k ; i <= 100001 ; i++) dp[i] = MOD(dp[i - 1] + dp[i - k]) ; // dp 
    for(ll i = 1 ; i <= 100001 ; i++) dp[i] += MOD(dp[i - 1]) ; // sum 
    while(len--){
        cin >> a >> b ; 
        cout << MOD(dp[b] - dp[a - 1]) << endl ;
    }
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