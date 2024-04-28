#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , q , a , b , plus = 0 , count = 0 ; 
    cin >> len >> q ; 
    vector<ll> add(len , 0) ;
    ll arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ;
    for(int i = 0 ; i < q ; i++){
        cin >> a >> b ; 
        add[a - 1]++ ;
        if(b != len)
            add[b]-- ;
    }
    for(int i = 0 ; i < len ; i++){
        plus += add[i] ;
        add[i] = plus ; 
    }
    sort(add.begin() , add.end()) ;
    for(int i = 0 ; i < len ; i++) count += arr[i] * add[i] ;
    return count ; 
}   

int main(){
    MAJOONI
    cout << solve() << '\n' ;
}