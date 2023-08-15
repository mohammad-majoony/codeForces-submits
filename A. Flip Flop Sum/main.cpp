#include <bits/stdc++.h>
using namespace std ;
int main(){
    int tc , lenght , last , currect , pos , neg ;
    cin >> tc ;
    for(int i = 0 ; i < tc ; i++){
        pos = 0 , neg = 0 ;
        cin >> lenght ;
        cin >> last ;
        if(last == 1) pos += 1 ;
        else neg += 1  ;

        bool twoneg = false ;

        for(int j = 1 ; j < lenght ; j++){
            cin >> currect ;
            if(currect == last && currect == -1) twoneg = true ;
            last = currect ;

            if(last == 1) pos += 1 ;
            else neg += 1  ;
        }
        if(neg == 0) cout << pos - 4 ;
        else if(twoneg) cout << pos - neg + 4 ;
        else cout << pos - neg ;
        cout << endl ;
    }
}