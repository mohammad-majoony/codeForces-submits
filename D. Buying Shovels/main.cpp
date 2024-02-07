#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll num , range , get ; 
    cin >> num >> range ; 
    if(num > range){
        ll mini = num , store ; 
        get = (range > sqrt(num)) ? sqrt(num) : range ; 
        for(ll i = 2 ; i <= get ; i++){
            store = num / i ;
            if(num % i == 0){
                if(store <= range && store < mini) mini = i ;
                if(i <= range && i < mini) mini = store ; 
            }
        }
        return mini ;
    }else return 1 ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}