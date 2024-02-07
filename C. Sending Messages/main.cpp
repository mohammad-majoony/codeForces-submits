#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string solve(){
    ll len , ch , mines , to , last = 0 , cu ;
    cin >> len >> ch >> mines >> to ;
    while(len--){
        cin >> cu ;
        if((cu - last) * mines > to) ch -= to ;
        else ch -= (cu - last) * mines ;
        last = cu ;
    }
    return (ch > 0) ? "YES" : "NO" ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}