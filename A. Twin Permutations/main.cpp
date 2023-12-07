#include<bits/stdc++.h>
using namespace std ;
#define enl '\n' ;

void solve(){
    int len , num ; cin >> len ;
    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        cout << len - num + 1 << " " ;
    } cout << enl ;

}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}