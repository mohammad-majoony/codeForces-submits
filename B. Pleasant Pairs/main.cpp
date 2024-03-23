// https://codeforces.com/problemset/problem/1541/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

int solve(){
    ll len , count = 0 ; cin >> len ; 
    ll arr[len + 1] ; 
    for(ll i = 1 ; i <= len ; i++) cin >> arr[i] ; 

    for(ll i = 1 ; i < len ; i++){
        for(ll j = arr[i] - i ; j <= len ; j += arr[i]){
            if(i < j && arr[i] * arr[j] == i + j) count++ ;
        }
    }

    return count ;
}

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}