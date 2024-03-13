#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll n1 , n2 , count = 0 ; 
    cin >> n1 >> n2 ;
    while(n2){
        count += n2 - n1 ; 
        n1 /= 10 ;
        n2 /= 10 ;
    } 
    return count ;
}   

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << slove() << '\n' ;
}