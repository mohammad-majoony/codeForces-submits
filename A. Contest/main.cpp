#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    double misha = max(3 * a / 10.0 , a - a * c / 250.0) ;
    double vasya = max(3 * b / 10.0 , b - b * d / 250.0) ;

    if(vasya == misha) cout << "Tie" ; 
    else if (misha > vasya) cout << "Misha" ; 
    else cout << "Vasya" ;
}