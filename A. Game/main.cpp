#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len ; 
    cin >> len ; 
    int arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ; 
    sort(arr , arr + len) ; 

    cout << ((len % 2) ? arr[len / 2] : arr[len / 2 - 1] ) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    solve() ;
}