// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/567/problem/C

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
    ll len , k , n , count = 0 ; 
    cin >> len >> k ; 
    map<ll , ll> left ; 
    map<ll , ll> right ; 
    for(int i = 0 ; i < len ; i++){
        cin >> n ; 
        mem.push_back(n) ; 
        left[n]++ ; 
    }
    for(int i = len - 1 ; i >= 0 ; i--){
        n = mem[i] ; 
        left[n]-- ; 
        if(n % k == 0) count += left[n / k] * right[n * k] ; 
        right[n]++ ; 
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