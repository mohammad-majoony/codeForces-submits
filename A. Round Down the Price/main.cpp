#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    string number ;
    cin >> number ;
    ll length , mines ; 
    length = number.size() ;
    mines = pow(10 , length - 1);
    cout << stoll(number) - mines << endl ;
    
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}