// https://codeforces.com/problemset/problem/1213/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , num , count = 0 , mini ; 
    cin >> len ;
    ll arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    mini = arr[len - 1] ;
    for(int i = len - 2 ; i >= 0 ; i--){
        if(arr[i] > mini) count++ ; 
        mini = min(mini , arr[i]) ;
    }
    return count ;
}

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << "\n" ;
}
