#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int len , d ;
    cin >> len >> d ;
    int arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ;
    for(int i = 2 ; i < len ; i++){
        if(arr[i] > d && arr[0] + arr[1] > d) return "NO\n" ;
    }
    return "YES\n" ; 
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() ;
}