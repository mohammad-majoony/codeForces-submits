#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , water , count , cost ;
    cin >> length >> water ;
    ll arr[length] ;
    for(ll index = 0 ; index < length ; index++) cin >> arr[index] ;
    sort(arr , arr + length) ;
    count = arr[0] ;

    for(ll index = 0 ; index < length - 1 ; index++){
        cost = (arr[index + 1] - arr[index]) * (index + 1) ;
        if(cost < water){
            water -= cost ;
            count = arr[index + 1] ;    
        }
        else if(cost == water){
            water = 0 ;
            count = arr[index + 1] ;
            break;
        }
        else{
            count += water / (index + 1) ;
            water = 0 ;
            break;
        }
    }
    if(count == arr[length - 1]) count += water / length ;
    cout << count << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}