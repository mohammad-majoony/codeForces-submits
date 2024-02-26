#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , num , mini ; 
    cin >> len ; mini = len ;
    unordered_map<ll , ll> counter ; 
    for(ll i = 0 ; i < len ; i++){
        cin >> num ; 
        if(!counter.contains(i)) counter[i] = 0 ;
        if(counter.contains(i - 1)) counter[i] = max(counter[i] , counter[i - 1]) ;
        if(len - i >= num + 1){
            if(!counter.contains(i + num + 1)) counter[i + num + 1] = 0 ;
            counter[i + num + 1] = max(counter[i + num + 1] , counter[i] + num + 1) ;
        }
        mini = min(mini , len - counter[i]) ;
    }
    if(counter.contains(len)) mini = min(mini , len - counter[len]) ;
    return mini ; 

}

int main(){
    MMD 
    int tc ; 
    cin >> tc ;
    while(tc--) cout << slove() << '\n' ;
}