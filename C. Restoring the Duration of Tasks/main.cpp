// https://codeforces.com/problemset/problem/1690/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len  , end ; cin >> len ;
    ll a[len] , b[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> a[i] ;
    for(int i = 0 ; i < len ; i++) cin >> b[i] ;
    end = a[0] ; 
    for(int i = 0 ; i < len ; i++){
        end = max(end , a[i]) ;
        cout << b[i] - end << " " ;
        end = b[i] ; 
    } cout << '\n' ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
} 