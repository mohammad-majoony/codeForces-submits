#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , count = 0 , num , maxi = 0 ;
    cin >> len ;

    for(int index = 1 ; index < len + 1 ; index++){
        cin >> num ;
        maxi = max(maxi , num) ;
        if(maxi == index) count++ ;
    }
    cout << count ;
}