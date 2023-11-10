#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int lenText , lenT ;
    cin >> lenText >> lenT ;
    string text , t ;
    cin >> text >> t ;

    bool use = 0 , start ;
    if(t[0] == '1') start = 1 ;
    else start = 0 ;
    if(lenT % 2){
        use = 1 ;
        for(int index = 1 ; index < lenT ; index++){
            if(t[index] == t[index - 1]){
                use = 0 ;
                break;
            }
        }
    }

    for(int index = 1 ; index < lenText ; index++){
        if(text[index] == text[index - 1]){
            if(!use) return "NO\n" ;
            if(text[index] == '1' && start == 1) return "NO\n" ;
            if(text[index] == '0' && start == 0) return "NO\n" ;
        }
    }

    return "YES\n" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) cout << solve() ;
}