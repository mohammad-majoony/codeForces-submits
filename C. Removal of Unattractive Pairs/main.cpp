#include<bits/stdc++.h>
using namespace std ;

int solve(){
    int len , maxi = 0 ; cin >> len ;
    char letter ;
    map<char , int> table ;
    for(int index = 0 ; index < len ; index++){
        cin >> letter ;
        if(table.contains(letter)) table[letter]++ ;
        else table[letter] = 1 ;
        maxi = max(maxi , table[letter]) ;
    }

    return max(len % 2 , maxi * 2 - len) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}