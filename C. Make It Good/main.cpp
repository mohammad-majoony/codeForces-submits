#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , num ;
    cin >> length ;
    ll arr[length] ;
    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        arr[index] = num ;
    }
    length-- ;
    while(length > 0 && arr[length] <= arr[length - 1]) length-- ;
    while(length > 0 && arr[length] >= arr[length - 1]) length-- ;
   
    cout << length << endl ;
}


int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}