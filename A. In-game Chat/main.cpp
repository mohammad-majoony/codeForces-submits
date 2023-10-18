#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int length , count = 0 ; 
    cin >> length ;
    string text ;
    cin >> text ;

    for(int index = length - 1 ; index >= 0 ; index--){
        if(text[index] == ')') count++ ;
        else break;
    }

    cout << ((count > length - count) ? "YES\n" : "NO\n") ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}