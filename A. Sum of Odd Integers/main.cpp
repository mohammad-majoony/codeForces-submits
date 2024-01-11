#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string solve(){
    ll num , len , an , sum ;
    cin >> num >> len ;

    len-- ;
    an = 1 + (len - 1) * 2 ;
    sum = len * ((1 + an) / 2) ;

    if(sum > num || (num - sum) % 2 == 0 || num - sum <= an) return "NO" ;
    return "YES" ; 
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    ll tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}