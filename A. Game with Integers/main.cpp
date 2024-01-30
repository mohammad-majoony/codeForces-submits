#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int num ; 
    cin >> num ; 
    num %= 3 ; 
    if(num == 1 || num == 2) return "First\n" ;
    return "Second\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ;

    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() ;
}