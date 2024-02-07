#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int l , r ;
    cin >> l >> r ;

    if(l * 2 <= r) cout << l << " " << l * 2 << '\n' ;
    else cout << -1 << " " << -1 << '\n' ;

}

int main(){
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}