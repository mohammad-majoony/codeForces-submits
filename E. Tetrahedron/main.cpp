#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

#define mod 1000000007 

void solve(){
    ll num ; cin >> num ; 
    ll last = 0 ;
    for(ll i = 1 ; i < num ; i++){
        if(i % 2) last = (++last * 3) % mod ;
        else last = (--last * 3) % mod ;
    }   
    cout << last % mod ;
}

int main(){
    solve() ;
}