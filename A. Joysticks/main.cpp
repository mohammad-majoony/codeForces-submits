// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/651/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll a , b , count = 0 , add ;
    cin >> a >> b ; 
    while(true){
        if(a > b) swap(a , b) ;
        if(a == 0 || b <= 1) break ;
        if(b == 2){
            count++ ; 
            break ;
        }
        add = add = b / 2 ;
        if(b % 2 == 0) add-- ;
        b -= add*2 ;
        a += add ;
        count += add ; 
    }
    cout << count << '\n' ;
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)*
    solve() ;
}