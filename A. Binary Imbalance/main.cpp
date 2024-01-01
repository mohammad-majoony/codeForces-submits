#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int len , res = 0 , z = 0 , o = 0 ; 
    string txt ;
    cin >> len >> txt ;
    if(txt[0] == '0') z++ ;
    else o++ ;
    for(int index = 1 ; index < len ; index++){
        if(txt[index] == '0') z++ ;
        else o++ ;
        if(txt[index] != txt[index - 1]) return "YES\n" ;
    }
    return ((z > o) ? "YES\n" : "NO\n") ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() ;
}