#include<bits/stdc++.h>
using namespace std ;

int main(){
    int length , first , second , flag = 1 ; 
    string text ;
    cin >> length >> text ;

    first = length / 2 - 1 ;
    second = first + 1 ;
    if(length % 2 == 1) second++ ;
    
    char letters[length] ;

    for(int index = 0 ; index < length ; index++){  
        if(index == 0 && length % 2){
            letters[first + 1] = text[0] ;
            continue ;
        }
        if(flag) letters[first--] = text[index] ;
        else letters[second++] = text[index] ;
        flag = (flag) ? 0 : 1 ;
    }

    for(auto letter : letters) cout << letter ;
}