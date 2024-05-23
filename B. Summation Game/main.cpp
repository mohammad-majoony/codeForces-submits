// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1920/B

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
    ll len , maxi , sums = 0 , mines = 0 , de , m ;
    cin >> len >> de >> m ; 
    ll arr[len] ;  
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        sums += arr[i] ; 
    }
    sort(arr , arr + len) ; 
    ll j = len - 1 , k = m ; 
    while(k--) mines += arr[j--] ; 

    maxi = sums - 2 * (mines) ; 
    ll i = len - 1 ; j = len - 1 - m ; k = de ; 
    while(k--){
        if(j < 0){
            sums -= arr[i] ; 
            mines -= arr[i] ; 
            i-- ; 
        }else{
            sums -= arr[i] ; 
            mines -= arr[i] ; 
            mines += arr[j] ; 
            i-- ; 
            j-- ;
        }
        maxi = max(maxi , sums - 2 * (mines)) ; 
    }
    cout << maxi << endl ; 
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