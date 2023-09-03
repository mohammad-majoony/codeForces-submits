#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string slove(){
    string text ;
    cin >> text ;
    ll length = text.size() , count = 0 , ordering = -1 ;
    for(int index = 0 ; index < length ; index++){
        if(text[index] == '+') count += 1 ;
        else if(text[index] == '-') count -= 1 ;

        else if(text[index] == '0'){
            if(ordering == 1 || count <= 1) return "NO" ;
            ordering = 0 ;
        }
        else if(text[index] == '1'){
            if(ordering == 0 && count > 1) return "NO" ;
            ordering = 1 ;
        }
        if(count <= 1) ordering = -1 ;
    }
    return "YES" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) cout << slove() << endl ;
}