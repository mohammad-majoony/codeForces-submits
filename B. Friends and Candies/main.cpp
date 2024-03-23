// https://codeforces.com/problemset/problem/1538/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , sums = 0 , m = 0 , div ; cin >> len ; 
    ll arr[len] ;
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        sums += arr[i] ; 
    }
    if(sums % len) return -1 ;
    div = sums / len ; 
    for(int i = 0 ; i < len ; i++){
        if(arr[i] > div) m++ ; 
    }
    return m ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    cout << solve() << '\n' ;
}