#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

ll solve(){
    ll length , num ;
    cin >> length ;
    map<ll , ll> count ;
    map<ll , ll> ind ;

    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        if(count.contains(num)) count[num]++ ;
        else count[num] = 1 ;
        ind[num] = index + 1 ;
    }

    for(auto const & [key , val] : count){
        if(val == 1) return ind[key] ;
    }
    return -1 ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) cout << solve() << "\n" ;    
}