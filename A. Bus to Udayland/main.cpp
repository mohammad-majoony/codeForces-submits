#include<bits/stdc++.h>
using namespace std ;

int main(){
    int length , flag = 0 ; 
    cin >> length ;
    string arr[length] , text ; 
    for(int index = 0 ; index < length ; index++){
        cin >> text ;
        if(!flag){
            if(text[0] == text[1] && text[0] == 'O'){
                flag = 1 ;
                text[0] = '+' ;
                text[1] = '+' ;
            }
            else if(text[4] == text[3] && text[3] == 'O'){
                flag = 1 ;
                text[3] = '+' ;
                text[4] = '+' ;
            }
        }
        arr[index] = text ;
    }
    if(flag){
        cout << "YES\n" ;
        for(int index = 0 ; index < length ; index++) cout << arr[index] << "\n" ;
    }else cout << "NO\n" ;
}