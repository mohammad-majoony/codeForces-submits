#include<bits/stdc++.h>
#define enl '\n';
using namespace std ;

void solve(){
    int l1 , r1 , l2 , r2 , an1 , an2 ;
    cin >> l1 >> r1 >> l2 >> r2 ; 

    an1 = l1 ;
    an2 = l2 ;
    if(l1 == l2){
        if(l1 == r1) an1++ ;
        else an2++ ;
    } 
    cout << an1 << " " << an2 << enl ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}