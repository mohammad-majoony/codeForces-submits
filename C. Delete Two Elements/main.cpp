// https://codeforces.com/problemset/problem/1598/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , sums = 0 , count = 0 , lek , f  , m ; cin >> len ; 
    lek = len - 2 ; 
    ll arr[len] ; 
    map<ll , ll> ex ; 
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        sums += arr[i] ; 
        ex[arr[i]]++ ;
    }
    if((2 * sums) % len) return count ; 
    m = 2 * sums / len ;
    for(int i = 0 ; i < len ; i++){
       if(ex[m - arr[i]]) count += ex[m - arr[i]] ;
       if(m - arr[i] == arr[i]) count-- ;
    }
    return count / 2 ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    cout << solve() << '\n' ;
}