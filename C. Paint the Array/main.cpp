#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , num , gco = 0 , gce = 0 , res = 1 ;
    cin >> len ;
    ll arr[len] ; 
    for(ll i = 0 ; i < len; i++){
        cin >> num ; 
        arr[i] = num ;
        if(i % 2 == 0){
            if(gco == 0) gco = num ;
            gco = gcd(gco , num) ;
        }
        else{
            if(gce == 0) gce = num ;
            gce = gcd(gce , num) ;
        }
    }
    for(ll i = 1 ; i < len ; i += 2){
        if(arr[i] % gco == 0){
            res = 0 ;
            break ;
        }
    }

    if(res == 1) return gco ;
    res = 1 ;

    for(ll i = 0 ; i < len ; i += 2){
        if(arr[i] % gce == 0){
            res = 0 ;
            break ;
        }
    }

    if(res == 1) return gce ;

    return (res) ? max(gce , gco) : 0 ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}