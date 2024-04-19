// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/35/problem/D

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
    ll len , sums , maxi = 0 ; 
    cin >> len >> sums ; 
    mem.resize(len + 1) ; 
    for(int i = 1 ; i <= len ; i++) cin >> mem[i] , mem[i] *= (len - i + 1) ;   
    vector<vector<pair<ll , ll>>> dp (len + 1 , vector<pair<ll , ll>>(sums + 1 , make_pair(0 , 0))) ;
    dp[0][0].first = 1 ;
    
    for(int i = 1 ; i <= len ; i++){
        dp[i][0].first = 1 ;
        for(int j = 1 ; j <= sums ; j++){
            dp[i][j].first = dp[i - 1][j].first ;
            dp[i][j].second = dp[i - 1][j].second ;

            if(mem[i] <= j && dp[i - 1][j - mem[i]].first){
                dp[i][j].first = 1 ;
                dp[i][j].second = max(dp[i - 1][j - mem[i]].second + 1 , dp[i][j].second) ;
            }

            maxi = max(maxi , dp[i][j].second) ;
        }
    }

    cout << maxi ;
}

int main(){
    MAJOONI
    // #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    // #endif
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}