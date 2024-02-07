#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll x ; cin >> x ;
    if(x % 2 || x == 2) cout << x - 1 << " " << 1 << '\n' ;
    else cout << x - 2 << " " << 2 << '\n' ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}