#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len ; cin >> len ; 
    ll i1 = 1 , i2 = 1 , arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    
    for(int i = 1 ; i < len ; i++){
        if(arr[i] == arr[i - 1]) i1++ ;
        else break ;
    }
    if(len == i1) return 0 ;

    for(int i = len - 2 ; i >= 0 ; i--){
        if(arr[i] == arr[i + 1]) i2++ ;
        else break ;
    }

    if(arr[0] == arr[len - 1]) return len - i1 - i2 ; 
    else return len - max(i1 , i2) ; 
}       

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}