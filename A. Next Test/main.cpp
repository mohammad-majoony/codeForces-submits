#include<bits/stdc++.h>
using namespace std ;
int main(){
    int length , num ;
    cin >> length ;
    int nums[length] ;
    memset(nums , 0 , sizeof(nums)) ;
    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        if(length >= num) nums[num - 1] = 1 ;
    }
    for(int index = 0 ; index < length ; index++){
        if(nums[index] == 0){
            cout << index + 1 ;
            exit(0) ;
        }
    }
    cout << length + 1 ;
}