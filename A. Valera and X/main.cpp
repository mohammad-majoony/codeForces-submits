#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    int length , flag = 1;
    char letter ;
    map<int , char> table ;
    cin >> length ;

    for(int i = 0 ; i < length ; i++){
        for(int j = 0 ; j < length ; j++){
            cin >> letter ;
            if(i == j || i + j == length - 1){
                if(table.find(1) == table.end()) table[1] = letter ;
                else if(table[1] == letter) continue;
                else flag = 0 ;
            }else{
                if(table.find(0) == table.end()) table[0] = letter ;
                else if(table[0] == letter) continue;
                else flag = 0 ;
            }
        }
    }
    cout << ((flag && table[0] != table[1])?"YES":"NO") ;
}