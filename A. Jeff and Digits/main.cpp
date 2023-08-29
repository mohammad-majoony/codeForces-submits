#include<bits/stdc++.h>
#define int long long 
using namespace std ;
int32_t main(){
    int length , num , zero = 0 , five = 0 , start ;
    cin >> length ;
    while(length--){
        cin >> num ;
        if(num) five++;
        else zero++ ;
    }
    five = five - five % 9 ;

    if(zero && five) cout << string(five , '5') << string(zero , '0') ;
    else if(zero != 0) cout << 0 ;
    else cout << -1 ;
}