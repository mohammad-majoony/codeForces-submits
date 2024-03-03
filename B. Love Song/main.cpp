#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len , q , n1 , n2 ; cin >> len >> q ; 
    string txt ; cin >> txt ; 
    ll arr[len + 1] ; arr[0] = 0 ; 
    for(ll i = 0 ; i < len ; i++) arr[i + 1] = arr[i] + txt[i] - 'a' + 1 ;
    while(q--){
        cin >> n1 >> n2 ; 
        cout << arr[n2] - arr[n1 - 1] << '\n' ;
    }
}

int main(){
    MMD
    slove()  ;
}