#include<bits/stdc++.h>
#define int long long 
using namespace std ;

void slove(){
    int length , num , res = -1 , two = 0;
    cin >> length ;
    int nums[length] ;
    int arrR[length] ;

    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        if(num == 2) two++ ;
        nums[index] = two ;
        arrR[index] = num ;
    }

    two = 0 ;
    for(int index = length - 1 ; index > 0 ; index--){
        if(arrR[index] == 2) two++ ;
        arrR[index] = two ;
    }
    
    if(nums[0] == arrR[1]) res = 1 ;
    for(int index = 1 ; index < length - 1 ; index++){
        if(res != -1) break;
        if(nums[index] == arrR[index + 1]) res = index + 1 ;
    } 

    cout << res << endl ;

}

int32_t main(){
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}