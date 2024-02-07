#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , num , maxi = 0 ; 
    cin >> len ;
    unordered_map<ll , ll> mini ; 
    for(ll i = 0 ; i < len ; i++){
        cin >> num ; 
        if(!mini.contains(i + 1)) mini[i + 1] = i + 1 ;
        if(num + i + 1 <= len && !mini.contains(num + i + 1) || mini[num + i + 1] > mini[i + 1]) mini[num + i + 1] = mini[i + 1] ;
        maxi = max(maxi , num + i + 1 - mini[i + 1]) ;
        // cout << mini[i + 1] << '\n' ;
    }
    return maxi ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}