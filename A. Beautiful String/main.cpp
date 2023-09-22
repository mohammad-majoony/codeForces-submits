#include<bits/stdc++.h>
#define ll long long 
using namespace std ;


string slove(){
    char letters[] = "abc" ;
    string text ;
    cin >> text ;
    ll length = text.size() ;
    if(length == 1){
        if(text[0] == '?') return "a" ;
        return text ;
    }
    if(text[0] == '?'){
        for(auto letter : letters){
            if(letter != text[1]){
                text[0] = letter ;
                break;
            }
        }
    }
    if(text[length - 1] == '?'){
        for(auto letter : letters){
            if(letter != text[length - 2]){
                text[length - 1] = letter ;
                break;
            }
        }

    }
    for(ll index = 0 ; index < length ; index++){
        if(text[index] == text[index + 1] && text[index] != '?') return "-1" ;
        if(text[index] == '?'){
            for(auto letter : letters){
                if(letter != text[index - 1] && letter != text[index + 1]){
                    text[index] = letter ;
                    break;
                }
            }
        }

    }
    return text ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) cout << slove() << endl ;
}