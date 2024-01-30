#include<bits/stdc++.h>
#define ll long long 
using namespace std ; 

ll solve(){
    ll len , mini = numeric_limits<ll>::max() , count = 1 ; 
    cin >> len ; 
    ll arr[len] ; 
    for(ll i = 0 ; i < len ; i++) cin >> arr[i] ; 
    sort(arr , arr + len) ; 
    for(ll i = 0 ; i < len - 1 ; i++){
        mini = min(mini , arr[i + 1] - arr[i]) ;
        if(arr[i + 1] > mini) return count ;
        count++ ;
    }
    return count ; 
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ; 
}