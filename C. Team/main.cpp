// https://codeforces.com/problemset/problem/1538/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll z , o , mino , maxo , twoo ; 
    cin >> z >> o ; 
    mino = z + 1 ; 
    maxo = mino * 2 ;
    if(o >= mino - 2 && o <= maxo){
        twoo = o - mino ; 
        if(z == o) for(int i = 0 ; i < z ; i++) cout << "10" ;
        else if(z == o + 1){
            for(int i = 0 ; i < z - 1 ; i++) cout << "01" ;
            cout << "0" ;
        }
        else if(z == o - 1){
            for(int i = 0 ; i < o - 1 ; i++) cout << "10" ; 
            cout << "1" ;
        }
        else{
            for(int i = 0 ; i < mino - twoo ; i++) cout << "10" ; 
            for(int i = 0 ; i < twoo - 1 ; i++) cout << "110" ; 
            cout << "11" ;
        }
    }else cout << -1 ;
}

int main(){
    MAJOONI
    solve() ;
}