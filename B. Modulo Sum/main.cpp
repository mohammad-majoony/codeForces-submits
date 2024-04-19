// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/577/B

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
    ll len , mod ; 
    cin >> len >> mod ; 
    ll dp[2][mod] ;
    mem.resize(len) ; 
    for(int i = 0 ; i < len ; i++) cin >> mem[i] ; 
    memset(dp[0] , 0 , sizeof dp[0]) ; 
    memset(dp[1] , 0 , sizeof dp[1]) ; 
    dp[0][mem[0] % mod] = 1 ;

    if(len > mod){
        cout << "YES" ; 
        return ;
    }

    for(int i = 1 ; i < len ; i++){
        stack<int> add ; 
        for(int j = 0 ; j < mod ; j++){
            dp[1][j] |= dp[0][j] ; 
            if(dp[1][j] == 1) add.push((j + (mem[i]%mod)) % mod) ;
        }
        dp[1][mem[i]%mod] = 1 ;
        while(!add.empty()){
            dp[1][add.top()] = 1 ; 
            add.pop() ;
        }
        for(int j = 0 ; j < mod ; j++) dp[0][j] = dp[1][j] ;
    }
    
    cout << ((dp[0][0]) ? "YES" : "NO") ; 
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