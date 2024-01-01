#include<bits/stdc++.h>
#define enl '\n' ;
using namespace std ;

string solve(){
    int len ;
    string text ; 
    cin >> len >> text ;
    for(int index = 1 ; index < len ; index += 3){
        if(index + 1 >= len || (index + 1 < len && text[index] != text[index + 1])) return "NO" ;
    }
    return "YES" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}