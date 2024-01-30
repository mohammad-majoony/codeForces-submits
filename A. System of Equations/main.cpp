#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int a , b  , count = 0 ; 
    cin >> a >> b ; 
    for(int i = 0 ; i < 32 ; i++){
        for(int j = 0 ; j < 32 ; j++){
            if(i * i + j == a && i + j * j == b) count++ ; 
        }
    }
    cout << count ; 
} 