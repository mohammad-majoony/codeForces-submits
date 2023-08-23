#include<bits/stdc++.h>
using namespace std ;
int main(){
    int length , broken ;
    string text ;
    set<char> brokenChar;
    char letter ;
    cin >> length >> broken >> text ;
    for(int index = 0 ; index < broken ; index++){
        cin >> letter ;
        brokenChar.insert(letter)  ;
    }
    long long ans = 0 , count = 0 ;
    for(int index = 0 ; index < length ; index++){
        if(brokenChar.find((text[index])) != brokenChar.end()){
            count += 1 ;
        }else{
            ans += (count + 1) * count / 2 ;
            count = 0 ;  
        }
    }
    cout << ans + (count + 1) * count / 2  << endl ; 
}