#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a , b , c , step = 0 , mines ;
    cin >> a >> b >> c ;
    
    while(true){
        mines = gcd(c , (step)?b:a) ;
        
        if(step){
            if(mines > c) break;
            c -= mines ;
            step = 0 ;
        }else{
            if(mines > c) break;
            c -= mines ;
            step = 1 ;
        }
    }

    cout << ((step)?0:1) ;
}