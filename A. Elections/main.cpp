#include<bits/stdc++.h>
#define int long long 
using namespace std ;

void slove(){
    int nums[3] , num , maxi , cu ;
    for(int index = 0 ; index < 3 ; index++){
        cin >> num ;
        nums[index] = num ;
    }
    maxi = max(nums[0] , max(nums[1] , nums[2])) ;
    cu = count(nums , nums + 3 , maxi) ;
    if(cu != 1){
        for(auto num : nums){
            if(num == maxi) cout << 1 << " " ;
            else cout << maxi - num + 1 << " " ;
        }
    }else{
        for(auto num : nums){
            if(num == maxi) cout << 0 << " " ;
            else cout << maxi - num + 1 << " " ;
        }
    }
    cout << endl ;
}

int32_t main(){
    int tc ; 
    cin >> tc ;
    while(tc--) slove() ;
}