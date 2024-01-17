#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , num , find = 0 , get ;
    cin >> len >> num ;
    for(int index = 0 ; index < len ; index++){
        cin >> get ;
        if(get == num) find = 1 ;
    }

    cout << ((find) ? "YES\n" : "NO\n") ; 
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}