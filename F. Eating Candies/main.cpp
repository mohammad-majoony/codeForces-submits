#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , sums = 0 , maxi = 0 ;
    cin >> len ; 
    ll arr[len] , l = 0 , r = len - 1 ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ; 
    
    while(l <= r){
        if(sums >= 0) sums -= arr[r--] ;
        else sums += arr[l++] ;
        if(!sums) maxi = max(maxi , l + (len - r) - 1) ;
    }

    return maxi ;
}

int main(){
    MMD
    int tc ;
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}