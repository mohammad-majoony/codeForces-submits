#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , maxi = 0 , x ; 
    cin >> len >> x ; 
    ll arr[len] , count[len + 1] ; count[len] = 0 ;
    for(ll i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        count[i] = 0 ; 
    }
    sort(arr , arr + len) ; 
    for(ll i = 0 ; i < len ; i++){
        if(x % arr[i]){
            count[i + 1] = max(count[i + 1] , count[i]) ;
            if(x / arr[i] + 1 <= len - i){
                count[i + x / arr[i] + 1] = max(count[i + x / arr[i] + 1] , 1 + count[i]) ;
            }
        }
        else{
            if(x / arr[i]<= len - i){
                count[i + x / arr[i]] = max(count[i + x / arr[i]] , 1 + count[i]) ;
            }
        }
        maxi = max(maxi , count[i + 1]) ;
    }   

    return max(maxi , count[len]) ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}