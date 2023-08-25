#include<bits/stdc++.h>
using namespace std  ;
int main(){
    long tc , length , count , num , ans , flag ;
    cin >> tc ;
    while(tc--){
        cin >> length >> count ;
        long nums[length] ;
        for(int index = 0 ; index < length ; index++){
            cin >> num ;
            nums[index] = num ;
        }
        flag = 1 , ans = -1 ;
        while(flag && count){
            flag = 0 ;
            for(int index = 1 ; index < length ; index++){
                if(nums[index] > nums[index - 1]){
                    ans = index ;
                    flag = 1 ;
                    count-- ;
                    nums[index - 1]++ ;
                    break; 
                }
            }
        }
        if(!count) cout << ans << endl ;
        else cout << -1 << endl ;
    }
}