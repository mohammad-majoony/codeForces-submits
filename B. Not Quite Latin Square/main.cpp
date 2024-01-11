#include<bits/stdc++.h>
using namespace std ;

char solve(){
    int a = 0 , b = 0 , c = 0 , q = 0;
    char out ;
    string text ;
    for(int i = 0 ; i < 3 ; i++){
        cin >> text ;
        for(auto letter : text){
            if(letter == 'A') a++ ;
            else if(letter == 'B') b++ ;
            else if(letter == 'C') c++ ;
            else q++ ;
        }
        if(q){
            q = 0 ;
            if(a == b && c != a) out = 'C' ;
            else if(a == c && b != a) out = 'B' ;
            else if(c == b && c != a) out = 'A' ;
        }
    }

    return out ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}