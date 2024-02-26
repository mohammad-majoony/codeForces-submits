#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll num ; 
    cin >> num ; 
    ll h1 = num / 3 , last = num % 3 ; 
    if(last == 2) cout << h1 + 1 << " " << h1 + 2 << " " << h1 - 1 ;
    else if(last == 1) cout << h1 << " " << h1 + 2 << " " << h1 - 1 ;
    else cout << h1 << " " << h1 + 1 << " " << h1 - 1 ;

    cout << '\n' ;
}

int main(){
    MMD
    int tc ;
    cin >> tc ; 
    while(tc--) solve() ;
}