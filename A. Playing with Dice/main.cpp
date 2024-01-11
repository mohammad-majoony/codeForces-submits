#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a , b , p1 = 0 , d = 0 , p2 = 0 , f1 , f2 ;
    cin >> a >> b ;
    for(int i = 1 ; i <= 6 ; i++){
        f1 = abs(a - i) ;
        f2 = abs(b - i) ;
        if(f1 < f2) p1++ ;
        else if(f2 < f1) p2++ ;
        else d++ ;
    }
    cout << p1 << " " << d << " " << p2 ;
}