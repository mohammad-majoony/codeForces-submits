// https://codeforces.com/problemset/problem/1941/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , num , last , after = 0 , res = 1 ;
    cin >> len >> last ; 
    
    for(int i = 1 ; i < len - 1 ; i++){ 
        cin >> num ; 
        num -= after ;
        // cout << last << " " << num << " " << after <<'\n' ;
        if(last != 0) num = num - last * 2 ;
        if(num < 0) res = 0 ;
        after = last ;
        last = num ;
    }
    cin >> num ; 
    if(num - after != 0 || last != 0) res = 0 ;

    cout << ((res) ? "YES\n" : "NO\n") ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}