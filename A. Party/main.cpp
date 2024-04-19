// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/115/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;
vector<ll> memo ;

int findF(int i){
    if(mem[i] == -1) return 1 ;
    if(memo[i] != 0) return memo[i] ;
    return memo[i] = 1 + findF(mem[i] - 1) ; 
}

void solve(){
    ll len , count = 0 ; 
    unordered_map<int , int> c ; 
    cin >> len ; 
    mem.resize(len) ; 
    memo.resize(len , 0) ; 
    for(int i = 0 ; i < len ; i++) cin >> mem[i] ; 
    for(int i = 0 ; i < len ; i++){
        memo[i] = findF(i) ;
        count = max(count , memo[i]) ;
    }
    cout << count ;
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