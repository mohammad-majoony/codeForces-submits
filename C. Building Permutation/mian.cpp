#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    ll length , count = 0; 
    cin >> length ;
    ll arr[length] ;
    for(ll index = 0 ; index < length ; index++) cin >> arr[index] ;
    sort(arr , arr + length) ;
    for(ll index = 0 ; index < length ; index++) count += (arr[index] > index + 1) ? arr[index] - (index + 1) : (index + 1) - arr[index] ;
    cout << count ;
}