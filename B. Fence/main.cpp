#include<bits/stdc++.h>
using namespace std ;
int main(){
    int length , count , num ;
    cin >> length >> count ;
    int nums[length] ;
    for(int get = 0 ; get < length ; get++){
        cin >> num ;
        nums[get] = num ;
    }
    int last = 0 ;
    for(int index = 0 ; index < count ; index++){
        last += nums[index] ;
    }
    int mini = last ;
    int res = 1 ;

    for(int index = count ; index < length ; index++){
        last = last + nums[index] - nums[index - count] ;
        if(last < mini){
            mini = last ;
            res = index - count + 2  ;
        }
    }
    cout << res << endl ;
}