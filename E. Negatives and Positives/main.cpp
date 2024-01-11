#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

ll solve(){
    ll len , n = 0 , z = 0 , p = 0 , count = 0 ;
    cin >> len ;
    ll arr[len] ;
    for(ll i = 0 ; i < len ; i++){
        cin >> arr[i] ;
        if(arr[i] == 0) z++ ;
        else if (arr[i] > 0) p++ ;
        else n++ ;
        arr[i] = abs(arr[i]) ;
    }
    sort(arr , arr + len) ;
    if(z || n % 2 == 0) count += arr[0] ;
    else count -= arr[0] ;

    for(ll i = 1 ; i < len ; i++) count += abs(arr[i]) ;

    return count ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}