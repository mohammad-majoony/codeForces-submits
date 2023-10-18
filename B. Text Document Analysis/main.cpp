#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    int length ;
    string text ;
    cin >> length >> text ;

    bool pr = false ;
    int count = 0 ;

    int longOutside = 0 ;
    int countInside = 0 ;

    for(int index = 0 ; index < length ; index++){
        char letter = text[index] ;
        if(letter == '('){
            pr = 1 ;
            if(count > longOutside) longOutside = count ;
            count = 0 ;
        }
        else if(letter == ')'){
            pr = 0 ;
            if(count) countInside++ ;
            count = 0 ;
        }
        else if(letter == '_' && pr && count){
            count = 0 ;
            countInside++ ;
        }
        else if(letter == '_' && !pr && count){
            if(count > longOutside) longOutside = count ;
            count = 0 ;
        }
        else if(index == length - 1 && isalpha(letter)){
            if(count + 1 > longOutside) longOutside = count + 1 ;
        }
        else if(letter != '(' && letter != ')' && letter != '_') count++ ;

    }

    cout << longOutside << " " << countInside ;
}