#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string solve(){
    ll number , n1 , n2 ; 
    cin >> number ; 
    for(int i = 1 ; i < 10000 ; i++){
        n1 = pow(i , 3) ;
        n2 = cbrt(number - n1) ;
        n2 = pow(n2 , 3) ;
        if(n1 + n2 == number && n2 > 0) return "YES\n" ;
    }
    return "NO\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ;

    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() ;
} 