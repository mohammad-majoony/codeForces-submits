#include<bits/stdc++.h>
using namespace std ;

void solve(){
    string t1 , t2 ;
    int p1 = 0 , p2 = 0 , q = 0 ;
    cin >> t1 >> t2 ; 
    for(auto ch : t1){
        if(ch == '+') p1++ ;
        else p1-- ;
    }
    for(auto ch : t2){
        if(ch == '+') p2++ ;
        else if(ch == '-') p2-- ;
        else q++ ;
    }
    int dis = abs(p1 - p2) ;
    if(dis & 2 != q & 2 || dis > q) cout << 0 ;
    else{
        dis = dis + (q - dis) / 2 ;
        int top = 1 ;
        for(int i = q ; i > q - dis ; i--) top *= i ;
        int bottem = 1 ;
        for(int i = dis ; i > 0 ; i--) bottem *= i ;
        cout << setprecision(14) << top * 1.0 / pow(2 , q) / bottem ;
    } 
}

int main(){
    solve() ;
}