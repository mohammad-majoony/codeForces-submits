// https://codeforces.com/problemset/problem/1195/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

void solve(){
    ll len ; cin >> len ; 
    ll a1[len + 2] , a2[len + 2] ; 
    a1[0] = 0 ; a1[1] = 0 ; 
    a2[0] = 0 ; a2[1] = 0 ; 
    for(int i = 2 ; i < len + 2 ; i++) cin >> a1[i] ; 
    for(int i = 2 ; i < len + 2 ; i++) cin >> a2[i] ; 

    for(int i = 2 ; i < len + 2 ; i++){
        a1[i] += max(a2[i - 1] , a2[i - 2]) ;
        a2[i] += max(a1[i - 1] , a1[i - 2]) ;
    }

    cout << max(a1[len + 1] , a2[len + 1]) ;
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}