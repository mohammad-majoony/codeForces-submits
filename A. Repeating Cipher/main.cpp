#include <bits/stdc++.h>
using namespace std ;
int main(){
    int length ;
    cin >> length ;
    string text ;
    cin >> text ;
    int index = 0 ;
    int add = 1 ;
    while (index < length){
        cout << text[index] ;
        index += add++ ;
    }
}