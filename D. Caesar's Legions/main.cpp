// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/118/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (100000000)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
ll dp[101][101][11][11] ; 
int n1 , n2 , l1 , l2 ; 

ll counter(int f , int h , int fc , int hc){
    // base case 
    if(!f && !h) return 1 ; 

    // mem 
    if(~dp[f][h][fc][hc]) return dp[f][h][fc][hc] ; 

    // recursive
    ll res = 0 ; 
    if(!h && fc == l1) return dp[f][h][fc][hc] = 0 ; 
    if(!f && hc == l2) return dp[f][h][fc][hc] = 0 ; 
    if(fc < l1 && f) res += counter(f - 1 , h , fc + 1 , 0) ;
    if(hc < l2 && h) res += counter(f , h - 1 , 0 , hc + 1) ;

    return dp[f][h][fc][hc] = MOD(res) ;
}

void solve(){
    cin >> n1 >> n2 >> l1 >> l2 ; 
    memset(dp , -1 , sizeof dp) ; 
    cout << counter(n1 , n2 , 0 , 0) ;
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