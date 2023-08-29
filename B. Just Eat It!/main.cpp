#include<bits/stdc++.h>
#define int long long
using namespace std ;

void slove(){
    int length , num , flag = 1 ;
    cin >> length ;
    int nums[length] ;
    for(int index = 0 ; index < length ; index++){
        cin >> num ; 
        nums[index] = num ;
    }

    int left = 0 , right = 0 ;
    for(int index = 0 ; index < length - 1 ; index++){
        left += nums[index] ;
        right += nums[length - index - 1] ;

        if(left < 1 || right < 1){
            flag = 0 ;
            break;
        }
    }

    cout << ((flag)?"YES\n":"NO\n") ;
}

int32_t main(){
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}