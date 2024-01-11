#include<bits/stdc++.h>
using namespace std ;

int solve(){
    int a , b , c , d1 , d2 ;
    cin >> a >> b >> c ;
    d1 = abs(a - 1) ;
    d2 = abs(b - c) + abs(c - 1) ;
    if(d1 == d2) return 3 ;
    if(d1 > d2) return 2 ;
    return 1 ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}