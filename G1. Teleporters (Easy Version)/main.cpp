#include<bits/stdc++.h>
#define ll long long 
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

ll solve(){
    ll len , sums , num , count = 0 ;
    cin >> len >> sums ;
    priority_queue<ll , vector<ll> , greater<ll>> qu ;  
    for(ll i = 0 ; i < len ; i++){
        cin >> num ; 
        qu.push(num + i + 1) ;
    } 

    while(!qu.empty() && sums > 0){
        if(qu.top() <= sums){
            count++ ; 
            sums -= qu.top() ; 
            qu.pop() ;
        }
        else break ;
    }

    return count ; 
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << "\n" ;
}