#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , num , count = 0 ;
    cin >> len ; 
    unordered_map<ll , ll> best ; 
    ll counter[len + 1] ; counter[0] = 0 ; 
    for(ll i = 1 ; i <= len ; i++){
        cin >> num ; 
        if(best.contains(num)){
            counter[i] = max(counter[i - 1] , i - best[num] + 1 + counter[best[num] - 1]) ;
            if(counter[i - 1] - counter[best[num] - 1] - (i - best[num]) > 0) best[num] = i ;
        }else{
            best[num] = i ;
            counter[i] = counter[i - 1] ;
        }
        count = max(counter[i] , count) ;
    }

    return count ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}