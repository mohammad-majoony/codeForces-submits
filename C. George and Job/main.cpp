// https://codeforces.com/problemset/problem/467/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , m , k ; 
    cin >> len >> m >> k ; 
    ll arr[len + 1] ; arr[0] = 0 ; 

    for(int i = 1 ; i <= len ; i++){
        cin >> arr[i] ; 
        arr[i] += arr[i - 1] ;
    }
    ll dp[len + 1][k + 1] ; 
    
    for(int i = 0 ; i < len + 1 ; i++){
        for(int j = 0 ; j < k + 1 ; j++){
            if(!j) dp[i][j] = 0 ; 
            else dp[i][j] = -1 ; 
        }
    }

    for(int i = 1 ; i < len + 1 ; i++){
        for(int j = 1 ; j < k + 1 ; j++){
            dp[i][j] = dp[i - 1][j] ; 
            if(i >= m && dp[i - m][j - 1] != -1){
                dp[i][j] = max(dp[i][j] , arr[i] - arr[i - m] + dp[i - m][j - 1]) ;
            }
        }
    }
    
    return dp[len][k] ;
}

int main(){
    MAJOONI
    cout << solve() << "\n" ;
}
