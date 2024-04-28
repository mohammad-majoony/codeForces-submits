// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/830/A
// shout-out to my friend " khandan " 

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> pe ;
vector<ll> ke ;
ll len , key , home ; 
ll dp[1001][2001] ; 

ll miniWalk(ll ind , ll k){
    // base case 
    if(ind >= len) return 0 ; 
    if(k >= key) return INT_MAX ; 
    // mem
    if(dp[ind][k] != -1) return dp[ind][k] ; 
    // recursive 
    dp[ind][k] = min({miniWalk(ind , k + 1) , max(abs(pe[ind] - ke[k]) + abs(ke[k] - home) , miniWalk(ind + 1 , k + 1))}) ; 
    return dp[ind][k] ; 
}

void solve(){
    cin >> len >> key >> home ; 
    pe.resize(len) ; 
    ke.resize(key) ; 
    memset(dp , -1 , sizeof dp) ; 
    for(int i = 0 ; i < len ; i++) cin >> pe[i] ; 
    for(int i = 0 ; i < key ; i++) cin >> ke[i] ; 
    sort(ke.begin() , ke.end()) ;
    sort(pe.begin() , pe.end()) ;
    
    cout << miniWalk(0 , 0) ;
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