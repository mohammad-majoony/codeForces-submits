#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , last = -2 , count = 0 , num ; 
    cin >> len ;

    for(int index = 0 ; index < len ; index++){
        cin >> num ; 
        if(num == 1){
            if(last == -2 || index - last == 1) count++ ;
            else count += 2 ;
            last = index ;
        }
    }

    cout << count ;
}