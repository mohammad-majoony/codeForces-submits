#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , sum = 0 , count = 0 ; 
    unordered_map<ll , ll> counter ; counter[0] = 1 ;
    cin >> len ;
    string txt ; cin >> txt ;
    for(ll i = 0 ; i < len ; i++){
        sum += txt[i] - '0' - 1 ;
        if(counter.contains(sum)) count += counter[sum] ;
        counter[sum]++ ;
    }
    return count ; 
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}