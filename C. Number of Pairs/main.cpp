// https://codeforces.com/problemset/problem/1538/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;


ll solve(){
    ll len , a , b , count = 0 , n1 , n2 ; 
    cin >> len >> a >> b ; 
    ll arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ; 
    sort(arr , arr + len) ; 

    for(int i = 0 ; i < len ; i++){
        if(arr[i] > b) continue ;
        n1 = lower_bound(arr + i + 1 , arr + len , a - arr[i]) - arr ; 
        n2 = upper_bound(arr + i + 1 , arr + len , b - arr[i]) - arr ;
        count += n2 - n1 ;
    }
    return count ; 
}

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}