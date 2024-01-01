#include<bits/stdc++.h>
#define enl '\n' ;
typedef long long ll ;
using namespace std ;

int solve(){
    ll len , count = 0 ; cin >> len ;
    ll arr[len] ;
    for(ll i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ;
    ll maxi = arr[0] ;
    for(ll i = 0 ; i < len ; i++){
        arr[i] -= count ;
        count += arr[i] ;
        if(maxi < arr[i]) maxi = arr[i] ;
    }
    return maxi ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}
    
