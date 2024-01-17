#include<bits/stdc++.h>
#define dti static_cast<int>
using namespace std ;

void solve(){
    int count = 0 , num ; 
    cin >> num ;
    count = dti(sqrt(num)) + dti(cbrt(num)) + - dti(sqrt(cbrt(num))) ;
    cout << count << '\n' ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}