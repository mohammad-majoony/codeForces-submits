#include <bits/stdc++.h>

using namespace std ;

int main(){
    int testCase ;
    cin >> testCase ;
    for(int i = 0 ; i < testCase ; i++){
        int length {}, count {}, odd {}, even {}, num {} ;
        cin >> length >> count ;
        for(int i = 0 ; i < length ; i++){
            int num ;
            cin >> num ;
            if(num % 2 == 0) even++ ;
            else odd++ ;
        }

        while(count >= 3 && odd >= 3){
            count -= 2 ;
            odd -= 2 ;
        }

        if(count > even) count -= even ;
        else count = 1 ;


        if(count == 1 and odd >= 1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}