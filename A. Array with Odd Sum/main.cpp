#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , num , odd = 0 , even = 0 ;
    cin >> length ;
    while(length--){
        cin >> num ;
        (num % 2)?odd++:even++;
    }
    if(odd % 2 == 1 || (odd > 0 && even > 0)) cout << "YES\n" ;
    else cout << "NO\n" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}