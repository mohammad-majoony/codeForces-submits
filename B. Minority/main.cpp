#include<bits/stdc++.h>
using namespace std ;

int solve(){
    string text ; cin >> text ;
    int size = text.size() , z = 0 , o = 0;
    for(int index = 0 ; index < size ; index++){
        if(text[index] == '0') z++ ;
        else o++ ;
    }

    if(size < 3 || z == 0 || o == 0) return 0 ;
    else if(o == z) return z - 1 ;
    else return min(z , o) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}