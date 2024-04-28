#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll n , k , best , bind , last ;
    cin >> n >> k ;
    vector<ll> pr(n , 0) ; 
    pair<ll , ll> plus[k] ;
    for(ll i = 0 ; i < k ; i++) cin >> plus[i].first ;
    for(ll i = 0 ; i < k ; i++) cin >> plus[i].second ;
    sort(plus , plus + k , [](auto n1 , auto n2){
        return n1.first < n2.first ;
    }) ;

    best = plus[k - 1].second , bind = plus[k - 1].first , last = k - 1 ;
    for(ll i = n - 1 ; i >= 0 ; i--){
        if(last > 0 && i + 1 == plus[last - 1].first){
            last-- ;
            if(best + abs(i - bind + 1) > plus[last].second){
                best = plus[last].second ;
                bind = plus[last].first ;
            }
        }
        pr[i] = abs(i + 1 - bind) + best ;
    }

    best = plus[0].second , bind = plus[0].first , last = 0 ;
    for(ll i = 0 ; i < n ; i++){
        if(k > last + 1 && i + 1 == plus[last + 1].first){
            last++ ;
            if(best + abs(i - bind + 1) > plus[last].second){
                best = plus[last].second ;
                bind = plus[last].first ;
            }
        }
        cout << min(pr[i] , abs(i + 1 - bind) + best) << " " ;
    }

    cout << '\n' ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) slove() ;
}