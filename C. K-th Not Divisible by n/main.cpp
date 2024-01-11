#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

ll solve(){
    ll n , k ; cin >> n >> k ;
    return k + ((k - 1) / (n - 1)) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}