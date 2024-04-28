#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll num , a = 0 , b = 0 ; cin >> num ; 
    while(!(num % 3)){
        num /= 3 ; 
        a += 1 ;
    } 
    while(!(num % 2)){
        num /= 2 ; 
        b += 1 ;
    } 
    return ((num > 1 || b > a) ? -1 : a * 2 - b) ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}