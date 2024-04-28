#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , fr , f1 , f2 , count = 0 , s = 1 , e ; 
    cin >> len >> fr ; 
    vector<ll> arr(len + 1 , 1) ;
    for(ll i = 0 ; i < fr ; i++){
        cin >> f1 >> f2 ;
        if(f2 < f1) swap(f1 , f2) ;
        arr[f2] = max(arr[f2] , f1 + 1) ;
    }
    for(ll i = 1 ; i <= len ; i++){
        arr[i] = max(arr[i - 1] , arr[i]) ;
        count += i - arr[i] + 1 ;
    }
    return count ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}