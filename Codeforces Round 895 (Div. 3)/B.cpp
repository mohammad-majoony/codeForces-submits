#include<bits/stdc++.h>
#define ll long long 
using namespace std  ;

void slove(){
    ll length , num , cellNum , cellTime , compare = numeric_limits<ll>::max() ;
    cin >> length ;
    map<ll , ll> table ;
    ll arr[length] ;

    for(ll index = 0 ; index < length ; index++){
        cin >> cellNum >> cellTime ;
        if(table.contains(cellNum)) table[cellNum] = min(table[cellNum] , cellTime) ;
        else table[cellNum] = cellTime ;
        arr[index] = cellNum ;
    }

    sort(arr , arr + length) ;

    for(ll index = 0 ; index < length ; index++){
        if(table[arr[index]] < compare) compare = table[arr[index]] ;
        if(index == length - 1 or ((arr[index + 1] - arr[index]) * 2) > compare){
            if(compare % 2){
                cout << arr[index] + ceil(compare / 2) << endl ;
            }else{
                cout << arr[index] + ceil(compare / 2) - 1 << endl ;
            }
            break;
        }else{
            compare -= ((arr[index + 1] - arr[index]) * 2);
        }
    }
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}