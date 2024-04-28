// https://codeforces.com/problemset/problem/1709/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , qu , last , num , p , q ; 
    cin >> len >> qu ;
    ll arr[len] , left[len] , right[len] ;
    right[0] = 0 ; left[len - 1] = 0 ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ; 

    for(int i = 1 ; i < len ; i++){
        right[i] = right[i-1] ;
        if(arr[i - 1] > arr[i]) right[i] += arr[i - 1] - arr[i] ;
    }
    for(int i = len - 2 ; i >= 0 ; i--){
        left[i] = left[i+1] ;
        if(arr[i + 1] > arr[i]) left[i] += arr[i + 1] - arr[i] ;
    }

    while(qu--){
        cin >> p >> q ;
        if(p < q) cout << right[q - 1] - right[p - 1] << '\n' ;
        else cout << left[q - 1] - left[p - 1] << '\n' ;
    }
}

int main(){
    MAJOONI 
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
} 