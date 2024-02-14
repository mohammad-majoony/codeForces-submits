#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , sums = 0 , counter = 0 , div , sc ; 
    cin >> len ; 
    ll arr[len] ; 
    ll count[len] ; 
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        sums += arr[i] ;
    }
    if(sums % 3 != 0) return 0 ;
    div = sums / 3 ;
    sums = 0 , sc = 0 ; 
    for(int i = 0 ; i < len - 2 ; i++){
        sums += arr[i] ;
        if(sums == div) sc++ ;
        count[i] = sc ;
    }
    sums = 0 ;
    for(int i = len - 1 ; i > 1 ; i--){
        sums += arr[i] ;
        if(sums == div){
            counter += count[i - 2] ;
        }
        
    }
    return counter ;
}

int main(){
    MMD 
    cout << solve() ;
}