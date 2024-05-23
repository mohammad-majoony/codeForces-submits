// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

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

void solve(){
    int len , num , res = 3 ; 
    cin >> len ; 
    map<int , int> f ; 
    for(int i = 1 ; i <= len ; i++){
        cin >> num ; 
        f[i] = num ; 
    }
    for(int i = 1 ; i <= len ; i++){
        num = f[i] ; 
        if(f[num] == i){
            res = 2 ; 
            break ;
        }
    }
    cout << res << endl ; 
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