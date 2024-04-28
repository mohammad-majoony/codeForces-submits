// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1221/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<pair<ll , ll>> mem ;

void solve(){   
    ll len ; 
    cin >> len ;
    mem.resize(len) ; 
    for(int i = 0 ; i < len ; i++) cin >> mem[i].first >> mem[i].second ;
    vector<vector<ll>> dp(len + 1 , vector<ll>(3 , 0)) ; 
    dp[1][1] = mem[0].second , dp[1][2] = mem[0].second * 2 ; 
    for(int i = 2 ; i <= len ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(mem[i - 1].first + j == mem[i - 2].first) dp[i][j] = j * mem[i - 1].second+  min(dp[i - 1][1] , dp[i - 1][2]) ;
            else if(mem[i - 1].first - 1 + j == mem[i - 2].first) dp[i][j] = j * mem[i - 1].second + min(dp[i - 1][0] , dp[i - 1][2]) ; 
            else if(mem[i - 1].first - 2 + j == mem[i - 2].first) dp[i][j] = j * mem[i - 1].second + min(dp[i - 1][0] , dp[i - 1][1]) ; 
            else dp[i][j] = j * mem[i - 1].second + min({dp[i - 1][0] , dp[i - 1][1] , dp[i - 1][2]}) ; 
        }
    }

    cout << min({dp[len][0] , dp[len][1] , dp[len][2]}) << endl ;
}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}