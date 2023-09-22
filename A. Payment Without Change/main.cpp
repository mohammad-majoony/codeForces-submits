#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll a , b , n , s ;
    cin >> a >> b >> n >> s ;
    ll count = s / n ;
    s -= min(count , a) * n ; 
    cout << ((s<=b)?"YES\n":"NO\n") ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}