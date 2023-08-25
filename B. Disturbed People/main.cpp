#include<bits/stdc++.h>
using namespace std ;
int main(){
    int length , num , ans {0} ;
    cin >> length ;
    int nums[length] ;
    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        nums[index] = num ;
    }
    for(int index = 1 ; index < length - 1 ; index++){
        if(nums[index] == 0 && nums[index + 1] && nums[index - 1]){
            nums[index + 1] = 0 ;
            ans += 1 ;
        }
    }
    cout << ans ; 
}