#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll length , num , count = 0 , nums[3];
    memset(nums , 0 , sizeof(nums)) ;
    cin >> length ;
    while(length--){
        cin >> num ;
        if(count + 1 == 1) nums[0] += num ;
        else if(count + 1 == 2) nums[1] += num ;
        else{
            nums[2] += num ; count = -1 ;
        }
        count++ ;
    }
    if(nums[0] > nums[1] && nums[0] > nums[2]) cout << "chest" ;
    else if(nums[1] > nums[0] && nums[1] > nums[2]) cout << "biceps" ;
    else cout << "back" ;
}