#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , sums = 0 ;
    cin >> len ; 
    ll arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ;
    for(int i = 1 ; i < len ; i++) sums += arr[i] - arr[i - 1] ;
    return sums ;
    
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}