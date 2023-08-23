#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long tc ;
    string text , key ;
    cin >> tc ;
    for(int i = 0 ; i < tc ; i++){
        cin >> text ;
        stack<char> stak ; 
        for(char letter : text){
            if(stak.size()){
                key = "" ;
                key += stak.top() ;
                key += letter ;
                if(key == "BB" || key == "AB") stak.pop() ;
                else stak.push(letter) ;
            }else stak.push(letter) ;
        }
        cout << stak.size() << endl ;
    }
}