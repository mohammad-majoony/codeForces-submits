#include<bits/stdc++.h>
#define int long long 
using namespace std ;

int32_t main(){
    int count , before , after , mini , indmini , num;
    cin >> count >> before >> after ;
    mini = numeric_limits<int>::max() ;

    int nums[count] ;
    for(int index = 0 ; index < count ; index++){
        cin >> num ;
        if(mini > num){
            mini = num ;
            indmini = index ;
        }
        nums[index] = indmini;
    }

    for(int index = 0 ; index < count ; index++){
        bool flag {true} ;

        // before
        if(index + 1 - before < 1){
            if(nums[index] == index) flag = true ;
            else flag = false ;
        }else{
            if(nums[index] == index) flag = true ;
            else flag = false ;
        }
        // after 
        if(index + 1 <= count - after){
            if(nums[index + after] == index) flag = true ;
            else flag = false ;
        }else{
            if(nums[count - 1] == index) flag = true ;
            else flag = false ;
        }
        // res
        if(flag){
            cout << index + 1 ;
            break;
        }
    }
}