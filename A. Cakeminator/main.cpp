#include<bits/stdc++.h>
using namespace std ;

int main(){
    int r , c , count = 0 ;
    cin >> r >> c ;
    string arr[r] , text ;

    for(int index = 0 ; index < r ; index++){
        cin >> text ;
        if(text.find('S') == -1){
            for(int index = 0 ; index < c ; index++) text[index] = 'P' ;
            count += text.size() ;
        }
        arr[index] = text ;
    }

    for(int column = 0 ; column < c ; column++){
        bool flag = 1 ;
        for(int row = 0 ; row < r ; row++){
            if(arr[row][column] == 'S') flag = 0 ;
        }
        if(flag){
            for(int row = 0 ; row < r ; row++){
                if(arr[row][column] == '.') count++ ;
                arr[row][column] = 'P' ;
            }
        }
    }

    cout << count ; 
}