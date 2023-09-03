#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    string text ;
    cin >> text ;
    ll one = 0 , length = text.size() ;
    for(int index = 0 ; index < length ; index++){
        if(text[index] == '1'){
            one++ ;
            if(one >= 2) break;
        }
    }
    if(one == 0) cout << 0 ;
    else if(length % 2 && one == 1) cout << length / 2 ;
    else if(length % 2) cout << length / 2 + 1 ;
    else cout << length / 2 ;
}
