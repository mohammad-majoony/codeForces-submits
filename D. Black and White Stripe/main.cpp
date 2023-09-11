#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , count , res = numeric_limits<ll>::max() ; 
    string text ;
    cin >> length >> count >> text ;
    ll nums[length + 1] ;
    nums[0] = 0 ;
    for(ll index = 0 ; index < length ; index++){
        if(text[index] == 'B') nums[index + 1] = nums[index] + 1 ;
        else nums[index + 1] = nums[index] ;
    }
    for(ll index = count ; index < length + 1 ; index++){
        res = min(res , count - (nums[index] -  nums[index - count])) ;
    }
    cout << res << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}