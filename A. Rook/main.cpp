#include<bits/stdc++.h>
#define enl '\n' ;
using namespace std ;

void solve(){
    string text ; cin >> text ;
    int x = text[0] - 'a' , y = text[1] - '1'  , count ;

    count = 1 ;
    for(int index = x + 1 ; index < 8 ; index++) cout << char(text[0] + count++) << text[1] << enl ;
    count = -1 ;
    for(int index = x - 1 ; index >= 0 ; index--) cout << char(text[0] + count--) << text[1] << enl ;

    count = 1 ;
    for(int index = y + 1 ; index < 8 ; index++) cout << text[0] << text[1] - '0' + count++ << enl ;
    count = -1 ;
    for(int index = y - 1 ; index >= 0 ; index--) cout << text[0] << text[1] - '0' + count-- << enl ;

}

int main(){
    int tc ; cin >> tc ;
    while(tc--) solve() ;
}