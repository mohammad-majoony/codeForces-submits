// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/910/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;
string flower ;
ll len , k ; 

int miniJump(int i){
    // base case
    if(i >= len) return 0 ; 
    if(flower[i] == '0') return 1e9 ; 

    // mem 
    if(mem[i] != -1) return mem[i] ; 

    // recursive case 
    int res = 1e9;
    for(int j = k ; j > 0 ; j--) res = min(res , 1 + miniJump(i + j)) ;
    return mem[i] = res ; 
}

void solve(){ 
    cin >> len >> k >> flower ; 
    mem.resize(len - 1 , -1) ; 
    len-- ; 
    int res = miniJump(0) ; 
    cout << ((res >= 1e9) ? -1 : res) ;
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