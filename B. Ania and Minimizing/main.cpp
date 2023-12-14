#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , change ; 
    cin >> len >> change ;
    string number ; cin >> number ;

    int index = 1 ;
    if(len == 1) index = 0 ;
    else if(change > 0 && number[0] != '1'){number[0] = '1' ; change-- ;} 

    for(index ; index < len && change ; index++)
        if(number[index] != '0'){number[index] = '0' ; ; change-- ;}
    
    cout << number ;
}