#include<bits/stdc++.h>
using namespace std ; 

int main(){
    char chars[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y' , 'z'} ;
    int length , alpha ; 
    cin >> length >> alpha ;

    for(int index = 0 ; index < alpha ; index++){
        cout << chars[index] ;
    }

    int show = 0 ;
    if(alpha == 1) show = 1 ;

    for(int index = alpha ; index < length ; index++){
        cout << chars[show] ;
        show = (show) ? 0 : 1 ;
    }
    
}