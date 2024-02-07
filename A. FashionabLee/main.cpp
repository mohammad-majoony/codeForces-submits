#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string solve(){
    ll x ; cin >> x ;
    return ((x % 4) ? "NO" : "YES") ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}