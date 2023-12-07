#include<bits/stdc++.h>
using namespace std ;
#define enl '\n' ;

string solve(){
    int len , count = 0 , where = 0 , num1 , num2 ; 
    cin >> len ;
    cin >> num1 ;
    for(int index = 1 ; index < len ; index++){
        cin >> num2 ;
        if(num2 > num1 && where != 1){
            count++ ; 
            where = 1 ;
        }
        else if(num2 < num1 && where != -1) where = -1 ;
        else if(!where && num2 != num1) where = (num2 > num1) ? 1 : -1 ;
        if(index == len - 1 && where == -1) count++ ; 
        num1 = num2 ;
    }

    return ((count < 2) ? "YES" : "NO") ;
}


int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc = 0 ; cin >> tc ; 
    while(tc--) cout << solve() << enl ;
}