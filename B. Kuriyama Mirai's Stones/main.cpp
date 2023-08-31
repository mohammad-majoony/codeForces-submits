#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll length , num , last = 0 ;
    cin >> length ;
    ll arr[length] ;
    ll one[length + 1] ;
    one[0] = 0 ;
    ll two[length + 1] ;
    two[0] = 0 ;

    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        arr[index] = num ;
        last += num ;
        one[index + 1] = last ;
    }
    sort(arr , arr + length) ; last = 0 ;
    for(int index = 0 ; index < length ; index++){
        last += arr[index] ;
        two[index + 1] = last ;
    }
    cin >> length ;
    ll start , end , type ;
    while(length--){
        cin >> type >> start >> end ;
        if(type%2) cout << one[end] - one[start - 1] << endl ; 
        else cout << two[end] - two[start - 1] << endl ;
    }
}