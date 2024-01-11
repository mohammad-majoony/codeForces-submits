#include<bits/stdc++.h>
using namespace std ;

int main(){
    string t1 , t2 , txt ;
    cin >> t1 >> t2 >> txt ;
    map<char , char> table ;
    for(int i = 0 ; i < 26 ; i++) table[t1[i]] = t2[i] ;
    for(auto letter : txt){
        if(table.contains(letter)) cout << table[letter] ;
        else if(isalpha(letter) && table.contains(letter + 32)) cout << char(table[letter + 32] - 32) ;
        else cout << letter ;
    }
}