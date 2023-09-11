#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

/* Overloading * operator */
string operator * (string a, unsigned int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}

string slove(){
    string txt1 , txt2 ;
    cin >> txt1 >> txt2 ;
    ll len1 = txt1.size() , len2 = txt2.size() ;
    ll same = len1 * len2 / gcd(len1 , len2) ;
    txt1 = txt1 * (same / len1) ;
    txt2 = txt2 * (same / len2) ;
    if(txt1 == txt2) return txt1 ;
    return "-1" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) cout << slove() << endl ;
}