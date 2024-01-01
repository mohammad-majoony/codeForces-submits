#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

void solve(){
    ll len ; cin >> len ;
    ll n = 0 , z = 0 , p = 0 , num ;
    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        if(num == 0) z++ ;
        else if(num < 0) n++ ;
        else p++ ;
    }
    if(z > 0 || n % 2) cout << 0 << '\n'; 
    else{
        cout << 1 << '\n' ; 
        cout << 1 << " " << 0 << '\n' ;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}