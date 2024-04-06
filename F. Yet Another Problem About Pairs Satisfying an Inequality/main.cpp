// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1703/F

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , count = 0 , num ; cin >> len ; 
    ll dp[len + 1] ; dp[0] = 0 ; 
    for(int i = 1 ; i <= len ; i++){
        dp[i] = dp[i - 1] ;
        cin >> num ;
        if(num < i) dp[i]++ ;
        if(num < i) count += (num - 1 < 0) ? 0 : dp[num - 1] ;  
    }
    cout << count << '\n' ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}