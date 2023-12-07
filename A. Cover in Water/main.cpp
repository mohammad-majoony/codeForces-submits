#include<bits/stdc++.h>
#define enl '\n' ;
using namespace std ;

void solve(){
    string text ;
    int count = 0 , block = -1 , len , exist = 0 ; 
    cin >> len >> text ;
    for(int index = 0 ; index < len ; index++){
        if(text[index] == '#'){
            if(index - block > 2) count += 2 ;
            else if(index - block == 2) count++ ;
            if(index - block > 3){
                exist = 1 ;
                break ;
            }
            block = index ;
        }
        else if(index == len - 1 && text[index] == '.'){
            if(index - block > 2) exist = 1 ;
            else if(index - block > 1) count += 2 ;
            else count++ ;
        }
    }
    cout << ((exist) ? 2 : count) << enl ; 
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}