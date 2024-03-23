// https://codeforces.com/contest/1389/problem/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , count , left , sums = 0 , maxi = 0 , w , wo ; 
    cin >> len >> count >> left ; 
    ll dp[count + 2][left + 1] ;
    ll nums[len + 1] ;
    for(int i = 0 ; i < left + 1 ; i++) dp[0][i] = 0 ;
    for(int i = 1 ; i < len + 1 ; i++) cin >> nums[i] ; 

    for(int i = 1 ; i < count + 2 ; i++){
        for(int j = 0 ; j < left + 1 ; j++){
            dp[i][j] = 0 ;
            dp[i][0] = dp[i - 1][0] + nums[i] ;
            if(i >= 2 && j){
                w = dp[i][j - 1] + nums[i] + nums[i - 1] ;
                wo = dp[i - 1][j] + nums[i] ;
                if((i - 1) + j * 2 <= count) dp[i][j] = max(w , wo) ;
                else if((i - 1) + j * 2 - 1 == count) dp[i][j] = max(w , wo) - nums[i] ;
            }
            maxi = max(maxi , dp[i][j]) ;
        }
    }

    // for(int i = 1 ; i < count + 2 ; i++){
    //     for(int j = 0 ; j < left + 1 ; j++){
    //         cout << dp[i][j] << " " ;
    //     }
    //     cout << '\n' ;
    // }        
    
    cout << maxi << '\n' ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}