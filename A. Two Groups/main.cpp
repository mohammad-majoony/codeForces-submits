#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
    ll length , num , pos = 0 , neg = 0 ;
    cin >> length ;
    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        if(num < 0) neg -= num ;
        else pos += num ;
    }

    cout << ((pos > neg) ? pos - neg : neg - pos) << "\n" ;
    
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) solve() ;
}