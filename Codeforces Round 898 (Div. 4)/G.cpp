#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    string text ;
    cin >> text ;
    ll size = text.size() , count = 0 , ACount = 0 ;
    for(ll index = 0 ; index < size - 1 ; index++){
        if(text[index] == 'B' && text[index + 1] == 'A'){
            count += 1 ;
            ACount = 0 ;
            text[index + 1] = 'B' ;
        }
        else if(text[index] == 'A' && text[index + 1] == 'B'){
            count += ACount + 1 ;
            ACount = 0 ;
            text[index + 1] = 'C' ;
        }
        else if(text[index] == 'A') ACount++ ;
        else ACount = 0 ;
    }

    cout << count << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}