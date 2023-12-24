#include<bits/stdc++.h>
using namespace std ;

int main(){
    int cup = 0 , med = 0 , shel , num ;
    for(int i = 0 ; i < 3 ; i++){cin >> num ; cup += num ;}
    for(int i = 0 ; i < 3 ; i++){cin >> num ; med += num ;}
    cin >> shel ;

    shel -= cup / 5 ;
    if(cup % 5) shel-- ;

    shel -= med / 10 ;
    if(med % 10) shel-- ;

    cout << ((shel >= 0) ? "YES" : "NO") ;
}