#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len , num , count = 0 ; cin >> len ;
    ll arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        arr[i] -= num ;
    }
    sort(arr , arr + len) ;
    int l = 0  , r = len - 1 ;
    while(l < r){
        if(arr[r] + arr[l] > 0) count += r-- - l ; 
        else l++ ;
    }
    cout << count ;
}

int main(){
    MMD 
    slove() ;
}