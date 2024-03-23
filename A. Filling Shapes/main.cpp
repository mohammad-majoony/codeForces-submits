//https://codeforces.com/problemset/problem/1182/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

void solve(){
    ll num ; cin >> num ; 
    cout << ((num % 2) ? 0 : int(pow(2 , num / 2)) ) ;
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}