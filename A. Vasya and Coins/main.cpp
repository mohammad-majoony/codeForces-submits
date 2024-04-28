// https://codeforces.com/problemset/problem/1660/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;
ll solve(){
    ll a , b ; 
    cin >> a >> b ; 
    if(a) return b * 2 + a + 1 ;
    else return 1 ; 
}   
int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}
