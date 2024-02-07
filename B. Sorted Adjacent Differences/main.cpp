#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int len ; 
    cin >> len ;
    int s = 0 , e = len - 1 , ap = len - 1 ; 
    ll arr[len] , res[len] ;
    for(ll i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ;

    while(ap > -1){
        res[ap--] = arr[s++] ; 
        if(s <= e) res[ap--] = arr[e--] ; 
    }

    for (auto num : res) cout << num << " " ;
    cout << '\n' ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}