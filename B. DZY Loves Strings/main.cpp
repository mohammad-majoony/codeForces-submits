#include<bits/stdc++.h>
using namespace std ;
int main(){
    int num , maxi = numeric_limits<int>::min() , count ;
    string text ;
    cin >> text >> count ;
    int lenght = text.size() ;
    int nums[lenght] ;
    long ans {0} ;
    int value[26] ;
    for(int index = 0 ; index < 26 ; index++){
        cin >> num ;
        value[index] = num ;
        maxi = max(maxi , num) ;
    }
    for(int index = 0 ; index < lenght ; index++) nums[index] = value[int(char(text[index])) - 97] ;
    // sort(nums , nums + lenght) ;
    for(int index = 0 ; index < lenght ; index++) ans += (index + 1) * nums[index] ;
    for(int index = 0 ; index < count ; index++) ans += (index + 1 + lenght) * maxi ;
    cout << ans ;
}