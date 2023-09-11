#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string slove(){
    ll a , b , c , c1 , c2 , d ;
    cin >> a >> b >> c ;
    c1 = b - a ; 
    c2 = c - b ;

    if(c1 == c2) return "YES\n" ;
    // cahnge a 
    d = a + (c1 - c2) ;
    if(d / a > 0 && d / a == (double)d / a) return "YES\n" ;
    // change c
    d = c - (c2 - c1) ;
    if(d / c > 0 && d / c == (double)d / c) return "YES\n" ;
    // change b
    if((c + a) / 2 / b > 0 && abs(c + a) / 2 / b == (c + a) / (double)2 / b) return "YES\n" ;
    // fuck it 
    return "NO\n" ;
}

int main(){
    ll tc ; 
    cin >> tc ;
    while(tc--) cout << slove() ;
}


// if((b + c2) / a == (double)(b + c2) / a && (b + c2) / a > 0) cout << "YES\n" ;
// else if((b + c1) / c == (double)(b + c1) / c && (b + c1) / c > 0) cout << "YES\n" ;
// else if(((double(c) - a) / 2 + a) / b == (int)(((double(c) - a) / 2 + a) / b) && (int)(((double(c) - a) / 2 + a) / b) > 0) cout << "YES\n" ;
// else if(((double(a) - c) / 2 + c) / b == (int)(((double(a) - c) / 2 + c) / b) && (int)(((double(a) - c) / 2 + c) / b) > 0) cout << "YES\n" ;
// else cout << "NO\n" ;