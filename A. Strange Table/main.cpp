// https://codeforces.com/problemset/problem/1506/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;
ll solve(){
    ll n , m , x ; 
    cin >> n >> m >> x ; 
    ll row = x / n ; 
    if(x % n) row++ ;
    ll co = (x % n) ? x % n : n ; 
    return (co - 1) * m + row ;
}   
int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}
