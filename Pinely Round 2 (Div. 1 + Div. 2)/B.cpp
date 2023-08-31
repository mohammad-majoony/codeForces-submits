#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

ll swapFunc(vector<ll> arr ,ll length , ll startInd){
    if(length <= 1) return 0 ;
    ll indexswap = -1 , count = 0;
    vector<ll>arrLeft ; 
    vector<ll>arrRight ; 
    for(int index = 0 ; index < length ; index++){
        if(arr[index] != 1 and arr[index] != index + startInd + 1){
            indexswap = index ;
            break;
        }
    }
    for(int index = 0 ; index < length ; index++){
        if(arr[index] >= arr[indexswap]) arrRight.push_back(arr[index]) ;
        else arrLeft.push_back(arr[index]) ;
    }
    if(indexswap == -1) return 0 ;
    else count++ ;
    return count + swapFunc(arrLeft,arrLeft.size(),startInd) + swapFunc(arrRight,arrRight.size(),arr[indexswap] - 1) ;
}

void slove(){
    ll length , num ;
    cin >> length ;
    vector<ll> nums ;
    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        nums.push_back(num) ;
    }
    ll ans = swapFunc(nums , length , 0) ;
    cout << ans << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}