#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll a , b ; 
    cin >> a >> b ; 
    if(b % a) return lcm(a , b) ;
    else return b * b / a ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}