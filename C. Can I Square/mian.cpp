#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string solve(){
    ll len , count = 0 , num ; 
    cin >> len ;
    for(ll i = 0 ; i < len ; i++){
        cin >> num ; 
        count += num ;
    }

    ll sq = sqrt(count) ;

    return ((sq * sq == count) ? "YES\n" : "NO\n") ;

}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() ;
}