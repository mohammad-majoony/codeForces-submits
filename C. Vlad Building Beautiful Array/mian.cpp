#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
    ll len , num , odd = 0 , even = 0 , mino = 0 , mine = 0;
    cin >> len ;
    while(len--){
        cin >> num ;
        if(num % 2) odd++ ;
        else even++ ;
        if(num % 2){
            if(mino) mino = min(mino , num) ;
            else mino = num ;
        }else{
            if(mine) mine = min(mine , num) ;
            else mine = num ;
        }
    }

    if(!even || !odd) cout << "YES\n" ;
    else if(mino < mine) cout << "YES\n" ;
    else cout << "NO\n" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) solve() ; 
}