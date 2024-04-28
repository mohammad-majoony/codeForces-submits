// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1843/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

vector<vector<ll>> child ; 
ll dp[200001] ; 

void dfs(int cu , int pre){
    if(child[cu].size() == 1 && child[cu][0] != -1 && child[cu][0] == pre) dp[cu]++ ;
    for(auto node : child[cu]){
        if(node == pre) continue ;
        dfs(node , cu) ; 
        dp[cu] += dp[node] ; 
    }
}

void solve(){
    ll len , q , x , y ;
    cin >> len ;
    child.clear() ; 
    child.resize(len + 1 , {}) ; 
    memset(dp , 0 , sizeof dp) ; 
    for(int i = 0 ; i < len - 1 ; i++){
        cin >> x >> y ; 
        child[x].push_back(y) ; 
        child[y].push_back(x) ; 
    }
    cin >> q ;
    dfs(1 , -1) ; 
    while(q--){
        cin >> x >> y ; 
        cout << dp[x] * dp[y] << endl ; 
    }
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