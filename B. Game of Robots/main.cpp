#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , k ,  count = 0 ; 
    cin >> len >> k ; 
    int arr[len] ; 
    for(int index = 0 ; index < len ; index++) cin >> arr[index] ;

    for(int index = 0 ; index < len ; index++){
        if(index + 1 + count < k) count += index + 1 ;
        else{
            k -= count + 1 ;
            cout << arr[k] ;
            break ; 
        }
    }
}