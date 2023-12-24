#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , last = 0 , count ;
    cin >> len ; 
    int arr[len] ;
    count = len ;
    for(int index = 0 ; index < len ; index++) cin >> arr[index] ;
    sort(arr , arr + len) ;
    
    for(int index = 0 ; index < len ; index++){
        if(arr[index] < last) count-- ;
        else last = max(last + 1 , arr[index] - 1) ;

    }
    cout << count ;
}
 					 	 		  	 		  									 	