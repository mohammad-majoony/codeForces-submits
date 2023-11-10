#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int arr[4] ; 
    for(int index = 0 ; index < 4 ; index++) cin >> arr[index] ;
    if(arr[0] < arr[1] && arr[0] < arr[2] && arr[3] > arr[2] && arr[3] > arr[1]) return "YES\n" ;
    if(arr[2] < arr[0] && arr[2] < arr[3] && arr[1] > arr[3] && arr[1] > arr[0]) return "YES\n" ;
    if(arr[3] < arr[2] && arr[3] < arr[1] && arr[0] > arr[1] && arr[0] > arr[2]) return "YES\n" ;
    if(arr[1] < arr[3] && arr[1] < arr[0] && arr[2] > arr[3] && arr[2] > arr[0]) return "YES\n" ;
    return "NO\n" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) cout << solve() ;
}