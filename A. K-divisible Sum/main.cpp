#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , div ; 
    cin >> len >> div ; 
    if(len > div && len % div) return 2 ;
    return ((div % len) ? (div / len) + 1 : div / len ) ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}