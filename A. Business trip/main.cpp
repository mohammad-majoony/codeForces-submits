#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int solve(){
    int size , count = 0 , mySize = 0;
    cin >> size ;
    int nums[12] ;
    for(int index = 0 ; index < 12 ; index++) cin >> nums[index] ;
    sort(nums , nums + 12) ;
    for(int index = 11 ; index >= 0 ; index--){
        if(mySize >= size) return count ;
        count++ ;
        mySize += nums[index] ;
    }
    return ((mySize >= size)?count:-1) ;
}

int main(){
    cout << solve() ;
}