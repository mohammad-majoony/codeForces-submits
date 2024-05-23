// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1860/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

ll multiAndMod(ll a , ll b , ll c){
    ll count = 0 ; 
    while(b){
        if(b & 1) count += a , count %= c ; 
        b >>= 1 ;
        a += a , a %= c ; 
    }
    return count; 
}

ll power(ll a , ll b){
    ll count = 1 ; 
    while(b){
        if(b & 1) count *= a ; 
        b >>= 1 ;
        a *= a ; 
    }
    return count ; 
}

// minitarin har adad bayad aval biad . 
void solve(){
    ll len , count = 0 , mini1 , mini2 , num ;
    cin >> len ; mini1 = mini2 = len + 1 ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(num < mini1) mini1 = num ; 
        else if(num < mini2) mini2 = num , count++ ; 
    }
    cout << count << endl ; 
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