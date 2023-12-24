#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , flag = 1 , compare , num1 , num2 ;
    cin >> len >> num1 >> num2 ;
    compare = num1 - num2 ;

    for(int ind = 2 ; ind < len ; ind++){
        cin >> num1 ;
        if(num2 - num1 != compare) flag = 0 ;
        compare = num2 - num1 ;
        num2 = num1 ;
    } 

    cout << ((flag) ? num2 - compare : num2 ) ;
}