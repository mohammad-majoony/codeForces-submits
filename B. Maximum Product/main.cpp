// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1406/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;
ll len ; 

ll best(int i , int j , int r , ll mul){
    if(!r) return mul ; 
    return max(best(i + 1 , j , r - 1 , mem[i] * mul) , best(i , j - 1 , r - 1 , mem[j] * mul)) ; 
}

void solve(){
    ll remain = 5 , count = 0 ;
    cin >> len ; 
    mem.clear() ; 
    mem.resize(len) ; 
    for(int i = 0 ; i < len ; i++) cin >> mem[i] ; 
    sort(mem.begin() , mem.end()) ; 
    cout << best(0 , len - 1 , 5 , 1) << endl ;
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