#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(string PI){
    string text ;
    cin >> text ;
    ll res = text.size() ;
    for(int index = 0 ; index < text.size() ; index++){
        if(text[index] != PI[index]){
            res = index ; 
            break ;
        }
    }
    cout << res << endl ;    
}

int main(){
    ll tc ;
    string PI = "3141592653589793238462643383279502884197" ;
    cin >> tc ;
    while(tc--) slove(PI) ;
}