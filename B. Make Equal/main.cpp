#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string slove(){
    ll len , sums = 0 , con , add = 0 ;
    cin >> len ; 
    ll arr[len] ;
    for(ll i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        sums += arr[i] ;
    }
    if(sums % len) return "NO\n" ;
    con = sums / len ;
    for(ll i = 0 ; i < len ; i++){
        add += arr[i] - con ; 
        if(add < 0) return "NO\n" ;
    }
    return "YES\n" ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ;
    while(tc--) cout << slove() ;
}