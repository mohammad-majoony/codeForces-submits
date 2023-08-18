#include<bits/stdc++.h>
using namespace std ;
int main(){
    int tc , lenght ;
    string text ;
    cin >> tc ;
    for(int i = 0 ; i < tc ; i++){
        cin >> lenght >> text ;
        vector<char> storage ;
        storage.push_back(text[0]) ;
        for(int index = 1 ; index < lenght ; index++)
            if(text[index] != storage.back())  storage.push_back(text[index]) ;
        
        int index = 0 ;
        lenght = storage.size() ;
        bool flag = true ;

        while(index < lenght){
            if(storage[index] == 'W') index += 1 ;
            else if(index + 1 < lenght && storage[index + 1] != 'W' && storage[index + 1] != storage[index]) index += 1 ;
            else if(index - 1 >= 0 && storage[index - 1] != 'W' && storage[index - 1] != storage[index]) index += 1 ;
            else{
                flag = false ;
                break;
            }
        }

        if(flag) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    } 
}