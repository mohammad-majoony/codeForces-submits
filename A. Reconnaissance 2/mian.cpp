#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    int length , minimum ; 
    cin >> length ;

    int arr[length] , num ;
    for(int index = 0 ; index < length ; index++) cin >> arr[index] ;

    minimum = abs(arr[0] - arr[length - 1]) ;
    int ans[] = {1 , length} ;
    for(int index = 1 ; index < length ; index++){
        num = abs(arr[index] - arr[index - 1]) ;
        if(num < minimum){
            minimum = num ;
            ans[0] = index ;
            ans[1] = index + 1 ;
        } 
    }

    cout << ans[0] << " " << ans[1] ;
}