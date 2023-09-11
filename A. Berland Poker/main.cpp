#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

ll slove(){
    ll cardLen , jokerLen , pplLen ;
    cin >> cardLen >> jokerLen >> pplLen ;
    ll cardOfPalyer = cardLen / pplLen ;
    if(jokerLen > cardOfPalyer) jokerLen -= cardOfPalyer ;
    else return jokerLen ;
    return cardOfPalyer - ceil(jokerLen / (double)(pplLen - 1)) ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) cout << slove() << endl ;
}