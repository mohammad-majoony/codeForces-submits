#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len , left = 0 , right = 0 ;
    string text ;
    cin >> len >> text ;
    for(int index = 0 ; index < len ; index++){
        if(text[index] == 'R') right++ ;
        else left++ ;
    }

    cout << right + left + 1 ;
}