// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1555/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

void solve(){
    ll mini = LLONG_MAX ; 
    ll len ; cin >> len ; 
    ll arr[2][len + 1] ;
    arr[0][0] = 0 ; 
    arr[1][0] = 0 ; 
    for(int i = 1 ; i <= len ; i++){
        cin >> arr[0][i] ; 
        arr[0][i] += arr[0][i - 1] ; 
    }
    for(int i = 1 ; i <= len ; i++){
        cin >> arr[1][i] ; 
        arr[1][i] += arr[1][i - 1] ; 
    }
    for(int i = 1 ; i <= len ; i++){
        if(i == 1) mini = min(mini , arr[0][len] - arr[0][i]) ;
        else if(i == len) mini = min(mini , arr[1][i - 1]) ;
        else mini = min(mini , max(arr[0][len] - arr[0][i] , arr[1][i - 1])) ;
    }
    cout << mini << '\n' ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}