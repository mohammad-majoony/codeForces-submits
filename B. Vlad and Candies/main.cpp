#include<bits/stdc++.h>
#define end '\n' ;
using namespace std ;

string solve(){
    int len ; cin >> len ;
    int arr[len] ;
    for(int index = 0 ; index < len ; index++) cin >> arr[index] ;
    sort(arr , arr + len) ;
    if(len == 1) return ((arr[0] <= 1) ? "YES" : "NO") ;
    return ((arr[len - 1] - arr[len - 2] <= 1) ? "YES" : "NO") ;
}

int main(){
    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << end ;
}