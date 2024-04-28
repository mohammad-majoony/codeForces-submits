d// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/35/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len , x , count = 0 ; 
    cin >> len >> x ; 
    mem.resize(len) ;
    for(int i = 0 ; i < len ; i++){
        cin >> mem[i] ;
        mem[i] = mem[i] * (len - i) ;
    }
    sort(mem.begin() , mem.end()) ; 
    for(int i = 0 ; i < len ; i++){
        if(mem[i] <= x){
            count++ ;
            x -= mem[i] ; 
        } else break ;
    }
    cout << count ;
}

int main(){
    MAJOONI
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}