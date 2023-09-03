#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    ll length , k ;
    cin >> length >> k ;
    ll arr[length] , medine = length / 2 , count , cost;

    for(ll index = 0 ; index < length ; index++) cin >> arr[index] ;
    sort(arr , arr + length) ;

    for(ll index = medine + 1; index < length ; index++){
        if(arr[index] == arr[index - 1]) continue;
        count = index - medine ;
        cost = (count * arr[index]) - (arr[index - 1] * count) ;
        if(cost == k){
            cout << arr[index] ;
            exit(0) ;
        }else if(k > cost){
            arr[index - 1] = arr[index] ;
            k -= cost ;
        }else{
            cout << arr[index - 1] + (k / count) ;
            exit(0) ;
        }
    }
    cout << arr[length - 1] + (k / (length - medine)) ;
}