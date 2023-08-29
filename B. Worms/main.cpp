#include<bits/stdc++.h>
#define int long long 
using namespace std ;

int32_t main(){
    int length , num , tc , low , high , mid , res;
    cin >> length ;
    int nums[length + 1] ;
    nums[0] = 1 ;
    for(int index = 1 ; index < length + 1 ; index++){
        cin >> num ;
        nums[index] = num + nums[index - 1] ;
    }
    cin >> tc ;
    while(tc--){
        cin >> num ;
        low = 0 ; high = length - 1 ;
        while(low <= high){
            mid = (high + low) / 2 ;
            if(num >= nums[mid] && num < nums[mid + 1]) {
                res = mid + 1 ;
                break;
            }
            else if(num >= nums[mid + 1]) low = mid + 1 ;
            else high = mid ;
        }
        cout << res << endl ;
    }
}