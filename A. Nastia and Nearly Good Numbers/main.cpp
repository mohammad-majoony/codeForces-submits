// https://codeforces.com/problemset/problem/1521/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll a , b ; cin >> a >> b ;
    if(b == 1) cout << "NO\n" ;
    else cout << "YES\n" << a * b << " " << a * b + a << " " << 2 * a * b + a << '\n' ; 
}

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}