// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/264/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;
ll dp[100001] ;

void solve(){
    ll len , maxi = 0 ; 
    cin >> len ; 
    mem.resize(len) ; 
    map<ll , ll> counter ; 
    for(int i = 0 ; i < len ; i++) cin >> mem[i] ; 
    vector<ll> div ; 

    for(int i = 0 ; i < len ; i++){
        dp[i] = 1 ;     
        div.clear() ; 
        for(int j = 1 ; j * j <= mem[i] ; j++){
            if(mem[i] % j == 0){
                div.push_back(j) ; 
                if(j != 1) dp[i] = max(dp[i] , counter[j] + 1) ;
                counter[j]++ ; 
                if(mem[i] / j != j){
                    div.push_back(mem[i] / j) ; 
                    dp[i] = max(dp[i] , counter[mem[i] / j] + 1) ;
                    counter[mem[i] / j]++ ; 
                }
            }
        }
        for(auto j : div) counter[j] = max(counter[j] , dp[i]) ;
        maxi = max(maxi , dp[i]) ;
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