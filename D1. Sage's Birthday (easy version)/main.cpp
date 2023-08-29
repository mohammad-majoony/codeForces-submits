#include<bits/stdc++.h>
#define int long long
using namespace std ;

int32_t main(){
    int length , num , ans = 0;
    cin >> length ;
    int nums[length] ;
    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        nums[index] = num ;
    }

    if(length < 3){
        cout << ans << endl ;
        for(auto num : nums) cout << num << " " ;
    }else{
        sort(nums , nums + length) ;

        int arr [length] ;
        arr[0] = nums[length - 1] ;
        arr[length - 1] = nums[length - 2] ;

        ans = ceill(length / double(2)) - 1 ;

        int index = 1 , start = 0 , end = length - 3 ;

        while(index < length - 1){
            arr[index] = nums[start++] ;
            if(start > end) break; 
            arr[index + 1] = nums[end--] ;
            index += 2 ;
        }

        cout << ans << endl ;
        for(auto num : arr) cout << num << " " ;
    }
}