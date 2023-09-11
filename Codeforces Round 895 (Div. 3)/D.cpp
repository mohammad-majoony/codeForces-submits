#include<bits/stdc++.h>
#define ll long long 
using namespace std  ;

void slove(){
    ll length , x , y , xCount , yCount ;
    cin >> length >> x >> y ;

    xCount = length / x ; 
    yCount = length / y ; 

    ll same = length / ((x * y) / gcd (x , y)) ;

    xCount -= same ;
    yCount -= same ;

    ll sumsY = yCount * (yCount + 1) / 2 ;
    ll sumsX = (xCount)?((( length * (length + 1) / 2 ) - ( (length - xCount) * (length - xCount + 1) / 2 ))):0 ;
    
    cout << sumsX - sumsY << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}