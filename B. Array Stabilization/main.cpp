#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    ll length , num ;
    cin >> length ;

    map<ll , ll> maps ;
    ll arr[length] ;

    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        if(maps.contains(num)) maps[num]++ ;
        else maps[num] = 0 ;
        arr[index] = num ;
    }

    sort(arr , arr + length) ;
    ll dif1 = arr[1] - arr[0] ;
    ll dif2 = arr[length - 1] - arr[length - 2] ;

    if( maps[arr[0]] > 1 && maps[arr[length - 1]] > 1 ) cout << arr[length - 1] - arr[0] ;
    else if(maps[arr[0]] > 1 && maps[arr[length - 1]] == 1) cout << arr[length - 2] - arr[0] ;
    else if(maps[arr[0]] == 1 && maps[arr[length - 1]] > 1) cout << arr[length - 1] - arr[1] ;
    else if(dif2 > dif1) cout << arr[length - 2] - arr[0] ;
    else cout << arr[length - 1] - arr[1] ;
}