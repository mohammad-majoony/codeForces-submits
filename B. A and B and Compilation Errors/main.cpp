#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll length ;
    cin >> length ;
    ll arr1[length] ;
    ll arr2[length - 1] ;
    ll arr3[length - 2] ;
 
    for(ll index = 0 ; index < length ; index++) cin >> arr1[index] ;
    for(ll index = 0 ; index < length - 1 ; index++) cin >> arr2[index] ;
    for(ll index = 0 ; index < length - 2 ; index++) cin >> arr3[index] ;

    sort(arr1 , arr1 + length) ;
    sort(arr2 , arr2 + length - 1) ;
    sort(arr3 , arr3 + length - 2) ;

    ll length2 = length - 1 ;
    ll length3 = length - 2 ;

    ll index1 = 0 ;
    ll index2 = 0 ;
    ll index3 = 0 ;

    while(index1 < length){
        if(index2 >= length2){
            cout << arr1[index1] << endl ;
            break;
        }
        else if(arr1[index1] != arr2[index2]){
            cout << arr1[index1] << endl ;
            break;
        }
        else{
            index1++ ;
            index2++ ;
        }
    }

    index2 = 0 ;
    while(index2 < length){
        if(index3 >= length3){
            cout << arr2[index2] << endl ;
            break;
        }
        else if(arr2[index2] != arr3[index3]){
            cout << arr2[index2] << endl ;
            break;
        }
        else{
            index2++ ;
            index3++ ;
        }
    }
    
}