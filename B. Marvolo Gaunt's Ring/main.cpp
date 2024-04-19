// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/hK6hgc8x94/contest/222255/problem/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
// #define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;
vector<ll> nums ;
vector<vector<ll>> dp ; 

ll maxiMul(ll p , ll i){
    // base case 
    if(p < 0) return 0 ; 
    if(i < 0) return LLONG_MIN ;

    // memoisation
    if(dp[p][i] != LLONG_MIN) return dp[p][i] ;

    // recursive 
    return dp[p][i] = max(maxiMul(p , i - 1) , mem[p] * nums[i] + maxiMul(p - 1 , i)) ;

}

void solve(){
    ll len ; 
    cin >> len ;
    mem.resize(3) ;
    nums.resize(len) ; 
    for(int i = 0 ; i < 3 ; i++) cin >> mem[i] ; 
    for(int i = 0 ; i < len ; i++) cin >> nums[i] ; 
    dp.resize(3 , vector<ll>(1e5 + 1 , LLONG_MIN)) ; 
    cout << maxiMul(2 , len - 1) ;   
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