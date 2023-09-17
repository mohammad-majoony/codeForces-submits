// 'A', 'E', 'I', 'O', 'U' and 'Y'.

#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    vector<char> arr = {'A', 'E', 'I', 'O', 'U' ,'Y'} ;
    ll count = 0 , last = -1 ;
    string text ;
    cin >> text ;
    ll length = text.size() ;
    for(ll index = 0 ; index < length ; index++){
        if(find(begin(arr), end(arr), text[index]) != end(arr)){
            count = max(index - last , count) ;
            last = index ;
        }
        else if(index == length - 1) count = max(index + 1 - last , count) ;
    }
    cout << count ;
}