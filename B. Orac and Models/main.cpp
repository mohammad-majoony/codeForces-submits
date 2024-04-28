// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1350/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

void solve(){
    ll len , maxi = 1 ; cin >> len ;
    ll arr[len + 1] ; arr[0] = 0 ;
    vector<ll> counter(len + 1 , 1) ;
    for(ll i = 1 ; i <= len ; i++) cin >> arr[i] ;
    for(ll i = 1 ; i <= len ; i++){
        for(ll j = i * 2 ; j <= len ; j += i){
            if(arr[i] < arr[j])
                counter[j] = max(counter[j] , counter[i] + 1) ;
        }
        maxi = max(maxi , counter[i]) ;
    }
    cout << maxi << '\n' ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}