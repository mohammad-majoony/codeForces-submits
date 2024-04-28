#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string solve(){
    ll len , num , o = 0 , e = 0 , res = 0 ; 
    cin >> len ; 
    map<ll , bool> check ; check[0] = 1 ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(i % 2) o += num ;
        else e += num ;
        if(check.contains(o - e)) res = 1 ;
        else check[o - e] = 1 ; 
    }
    return ((res) ? "YES" : "NO") ;
}   

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}