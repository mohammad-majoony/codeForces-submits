#include<bits/stdc++.h>
using namespace std ;

int solve(){
    int a , b , c ;
    cin >> a >> b >> c ;
    if(a == c) return b ;
    else if(a == b) return c ;
    return a ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}