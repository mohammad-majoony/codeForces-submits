#include<bits/stdc++.h>
using namespace std ;
#define enl '\n' ;
 
int solve(){
    int len ; cin >> len ;
    int bit (0) , get ;
    int arr[len] ;
    for(int index = 0 ; index < len ; index++){
        cin >> arr[index] ;
        bit ^= arr[index] ;
    }
    for(int index = 0 ; index < len ; index++){
        get = bit ^ arr[index] ;
        if(get == arr[index]) return arr[index] ;
    }
    return arr[0] ;
}

int main(){
    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}