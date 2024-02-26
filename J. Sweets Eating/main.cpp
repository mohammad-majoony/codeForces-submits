#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len , k , count = 0 ; 
    cin >> len >> k ; 
    ll arr[len] , sums[len + 1] , change[len + 1] ; sums[0] = 0 , change[0] = 0 ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ;
    for(int i = 0 ; i < len ; i++){
        change[i + 1] = change[i] + arr[i] ;
        sums[i + 1] = change[i] + arr[i] ;
        if(i - k >= 0) sums[i + 1] += sums[i - k + 1] ;
        cout << sums[i + 1] << " " ;
    }  
}

int main(){
    MMD 
    slove() ;
}