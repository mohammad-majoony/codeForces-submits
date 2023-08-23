#include<bits/stdc++.h>
using namespace std ;
int main(){
    long lenght , num , res = 0 ;
    cin >> lenght ;
    long nums[lenght] ;
    for(int index = 0 ; index < lenght ; index++){
        cin >> num ;
        nums[index] = num ;
    }
    sort(nums , nums + lenght) ;
    for(int index = 0 ; index < lenght ; index += 2){
        res += nums[index + 1] - nums[index] ;
    }
    cout << res << endl ;
}