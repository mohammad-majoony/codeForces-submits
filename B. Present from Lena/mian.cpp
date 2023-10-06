#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    int num ; 
    cin >> num ; 
    int space = num * 2 , row = num * 2 + 1 ;

    for(int r = 0 ; r < (row / 2 + 1) ; r++){
        for(int s = 0 ; s < space ; s++) cout << " " ;
        space -= 2 ;

        for(int index = 0 ; index < r ; index++){
            if(r == 0) cout << index ;
            else cout << index << " " ;
        }

        if(r == 0) cout << r ;
        else cout << r << " " ;

        for(int index = r - 1 ; index >= 0 ; index--){
            if(index == 0) cout << index ;
            else cout << index << " " ;
        }
        cout << endl ;
    }

    space = 2 ;
    for(int r = row / 2 - 1 ; r >= 0 ; r--){
        for(int s = 0 ; s < space ; s++) cout << " " ;
        space += 2 ;

        for(int index = 0 ; index < r ; index++){
            if(r == 0) cout << index ;
            else cout << index << " " ;
        }

        if(r == 0) cout << r ;
        else cout << r << " " ;

        for(int index = r - 1 ; index >= 0 ; index--){
            if(index == 0) cout << index ;
            else cout << index << " " ;
        }

        cout << endl ;
    }
}