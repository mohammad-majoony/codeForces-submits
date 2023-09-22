#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll count = 0 ;
    string text ;
    for(int row = 1 ; row < 11 ; row++){
        cin >> text ;
        for(int index = 1 ; index < 11 ; index++){
            int number = index ;
            int numberow = row ;
            if(text[number - 1] == 'X'){
                if(numberow > 5) numberow = 11 - numberow ;
                if(number > 5) number = 11 - number ;
                if(number > numberow) number = numberow ;
                count += number ;
            }
        }
    }
    cout << count << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}