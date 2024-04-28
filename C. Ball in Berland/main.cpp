// https://codeforces.com/problemset/problem/1475/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll b , g , c , count = 0 ; 
    cin >> b >> g >> c ;
    pair<ll , ll> couple[c] ;
    map<ll , ll> x ;
    map<ll , ll> y ;
    for(ll i = 0 ; i < c ; i++){
        cin >> couple[i].first ; 
        x[couple[i].first]++ ;
    }
    for(ll i = 0 ; i < c ; i++){
        cin >> couple[i].second ;
        y[couple[i].second]++ ;
    }

    for(ll i = 0 ; i < c ; i++){
        count += c - 1 - x[couple[i].first] - y[couple[i].second] + 2 ;
    }
    cout << count / 2 << '\n' ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
} 