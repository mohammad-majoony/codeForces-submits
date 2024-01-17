#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void solve(){
    ll arr[7] ;
    for(int i = 0 ; i < 7 ; i++) cin >> arr[i] ;
    if(arr[2] == arr[1] + arr[0]) cout << arr[0] << " " << arr[1] << " " << arr[3] << '\n' ;
    else cout << arr[0] << " " << arr[1] << " " << arr[2] << '\n' ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}