#include<bits/stdc++.h>
using namespace std ;

void res(char arr[]){
    int red = count(arr , arr + 4 , '#') ;
    if(red == 3 || red == 1 || red == 0 || red == 4){
        cout << "YES" ;
        exit(0) ;
    }
}

int main(){
    string text[4] ;
    for(int index = 0 ; index < 4 ; index++) cin >> text[index] ;
    int count = 0 ;

    char letter1[4] = {text[0][0] , text[0][1] , text[1][0] , text[1][1]} ;
    res(letter1) ;

    char letter2[4] = {text[0][1] , text[0][2] , text[1][1] , text[1][2]} ;
    res(letter2) ;

    char letter3[4] = {text[0][2] , text[0][3] , text[1][2] , text[1][3]} ;
    res(letter3) ;

    // mid

    char letter4[4] = {text[1][0] , text[1][1] , text[2][0] , text[2][1]} ;
    res(letter4) ;

    char letter5[4] = {text[1][1] , text[1][2] , text[2][1] , text[2][2]} ;
    res(letter5) ;

    char letter6[4] = {text[1][2] , text[1][3] , text[2][2] , text[2][3]} ;
    res(letter6) ;

    // end

    char letter7[4] = {text[2][0] , text[2][1] , text[3][0] , text[3][1]} ;
    res(letter7) ;

    char letter8[4] = {text[2][1] , text[2][2] , text[3][1] , text[3][2]} ;
    res(letter8) ;

    char letter9[4] = {text[2][2] , text[2][3] , text[3][2] , text[3][3]} ;
    res(letter9) ;

    cout << "NO" ;
}