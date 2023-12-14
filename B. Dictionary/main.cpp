#include<bits/stdc++.h>
#define enl '\n' ;
using namespace std ;

int solve(){
    string txt ; cin >> txt ;
    int let1 = txt[0] - 'a' ;
    int let2 = txt[1] - 'a' + 1 ;
    int count = let1 * 25 ;

    if(txt[0] < txt[1]) count += let2 - 1 ;
    else count += let2 ;


    return count ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}