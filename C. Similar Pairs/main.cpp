#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length ; 
    cin >> length ;
    ll arr[length] ;
    for(ll index = 0 ; index < length ; index++) cin >> arr[index] ;
    sort(arr , arr + length) ;

    ll even = 0 , odd = 0 , mines = 0 , index = 0 ;
    while(index < length){
        if(index != length - 1 && arr[index + 1] - arr[index] == 1){
            mines++ ;
            index += 2 ;
        }
        else{
            if(arr[index++] % 2) odd++ ;
            else even++ ;
        }
    }

    cout << (((odd % 2 == 0 && even % 2 == 0) || (odd % 2 == even % 2 && mines > 0))?"YES\n":"NO\n") ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}