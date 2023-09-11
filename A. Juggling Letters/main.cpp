#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , flag = 1;
    cin >> length ;
    map<char , ll> letters ;
    string text ;
    for(int count = 0 ; count < length ; count++){
        cin >> text ; 
        for(int index = 0 ; index < text.size() ; index++) letters[text[index]]++ ;
    }

    for(auto [key , val] : letters){
        if(val % length) flag = false ;
    }    

    cout << ((flag)?"YES\n":"NO\n") ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}