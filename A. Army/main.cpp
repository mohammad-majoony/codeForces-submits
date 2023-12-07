#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len , a , b , count = 0 ; cin >> len ;
    int arr[len] ; arr[0] = 0 ;
    for(int index = 1 ; index < len ; index++) cin >> arr[index] ;
    cin >> a >> b ;

    for(int index = a ; index < b ; index++) count += arr[index] ;
    cout << count ;
}