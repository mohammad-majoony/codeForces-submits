// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/gym/517162/problem/F

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

ll len , h , l , r ; 
vector<ll> mem ;
ll dp[2001][2001] ;

ll sleepS(int ind , int s){
    ll ans = 0 ; 
    if(s >= l && s <= r) ans++ ; 
    if(ind >= len) return ans ; 
    if(dp[ind][s] != -1) return dp[ind][s] ;
    ll r1 = sleepS(ind + 1 , (s + mem[ind]) % h) ; 
    ll r2 = sleepS(ind + 1 , (s + mem[ind] - 1) % h) ; 
    ans += max(r1 , r2) ;

    return dp[ind][s] = ans ; 
}


void solve(){
    cin >> len >> h >> l >> r ; 
    mem.resize(len) ; 
    memset(dp , -1 , sizeof dp) ;
    for(int i = 0 ; i < len ; i++) cin >> mem[i] ; 
    cout << max(sleepS(1 , mem[0] % h) , sleepS(1 , (mem[0] - 1) % h)) ;
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