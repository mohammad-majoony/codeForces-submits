#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll x , y , one , two  , count = 0 ;
    cin >> x >> y >> one >> two ;
    if((x >= 0 && y >= 0) || (x < 0 && y < 0)){
        ll minimumCost = min(one * 2 , two) ;
        ll minimumMines = min(abs(x) , abs(y)) ;
        count += (minimumCost * minimumMines) + (one * (max(abs(x) , abs(y)) - minimumMines)) ;
    }else count += one * (abs(x) + abs(y)) ;
    cout << count << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}