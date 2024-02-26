#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll a , b , c , num ; 
    cin >> a >> b >> c ;
    num = max(a , b) / min(a , b) ;
    if(max(a , b) % min(a , b)) cout << ((num <= c) ? "YES\n" : "NO\n") ;  
    else cout << ((num - 1 <= c) ? "YES\n" : "NO\n") ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) slove() ;
}