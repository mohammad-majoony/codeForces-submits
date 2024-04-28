// https://codeforces.com/problemset/problem/519/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int a , b , count = 0 , m = 2 ; 
    cin >> a >> b ;
    if(a > b) swap(a , b) ;

    if(a != b && a){
        if(a >= b - a){
            count += b - a ; 
            a -= count ; 
            b -= count * 2 ;
        }else{
            count += a ; 
            a = 0 ;
        }
    }
    if(a){
        while(true){
            if(a - m >= 0){
                count++ ; 
                a -= m ; 
                m = (m == 1) ? 2 : 1 ;
            }else break ;
        }
    }
    
    cout << count ;
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}