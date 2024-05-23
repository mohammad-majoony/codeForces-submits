// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1969/problem/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

const ll N = 3e5 + 50 ; 
const ll inf = 1e18 + 20 ;
const ll K = 15 ; 
ll mem[N][K] ; 

void solve(){
    ll len , k ; 
    cin >> len >> k ; 
    ll nums[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> nums[i] ;

    for(int i = 0 ; i <= k ; i++) mem[0][i] = 0 ; 

    ll mn ; 
    for(int i = 0 ; i < len ; i++){
        for(int j = 0 ; j <= k ; j++){
            mn = nums[i] ;
            for(int p = 0 ; p + j <= k ; p++){
                if(i + p == len) break ;
                mn = min(mn , nums[i + p]) ;
                mem[i + p + 1][j + p] = min(mem[i + p + 1][j + p] , mem[i][j] + (p + 1) * mn) ;
            }
        }
    }
    ll res = inf ; 
    for(int i = 0 ; i <= k ; i++) res = min(res , mem[len][i]) ; 
    cout << res << endl ; 

    for(int i = 0 ; i < len + 50 ; i++)
        for(int j = 0 ; j <= k ; j++) mem[i][j] = inf ; 
}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    for(int i = 0 ; i <= N ; i++)
        for(int j = 0 ; j <= K ; j++) mem[i][j] = inf ; 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}