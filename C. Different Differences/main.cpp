#include<bits/stdc++.h>
#define int long long 
using namespace std ;

void slove(){
    int count , maxi , flag = 1 , distanse = 2 , addCount = 1; 
    cin >> count >> maxi ;

    int nums[count] ;
    nums[count - 1] = maxi ;

    for(int index = count - 2 ; index > -1 ; index--){
        if(flag){
            if(nums[index + 1] - distanse >= count - addCount){
                nums[index] = nums[index + 1] - distanse++ ;
            }else{
                flag = 0 ;
                nums[index] = nums[index + 1] - 1 ;
            }
            addCount++ ;
        }else nums[index] = nums[index + 1] - 1 ;
    }

    for(auto num : nums) cout << num << " " ;
    cout << endl ;

}

int32_t main(){
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}