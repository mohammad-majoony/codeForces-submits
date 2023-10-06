#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

void solve(){
    ll length , first , minimum , num ;
    cin >> length ;
    cin >> first ;
    minimum = first ;
    length-- ;
    while(length--){
        cin >> num ;
        if(num < minimum) minimum = num ;
    }

    cout << ((first != minimum) ? "Alice\n" : "Bob\n" ) ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) solve() ;
}