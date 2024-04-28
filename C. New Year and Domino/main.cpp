//https://codeforces.com/contest/611/problem/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int r , c , r1 , c1 , r2 , c2 , tc , s1 , s2 , s3 , s4 ; 
    cin >> r >> c ; 
    string arr[r] ;
    ll dp[r + 1][c + 1] ;
    pair<int , int> mines[r + 1][c + 1] ;

    for(int i = 0 ; i <= c ; i++){
        dp[0][i] = 0 ;
        mines[0][i].first = 0 ;
        mines[0][i].second = 0 ;
    }
    for(int i = 0 ; i < r ; i++){
        dp[i][0] = 0 ;
        mines[i][0].first = 0 ;
        mines[i][0].second = 0 ;
        cin >> arr[i] ;
    } 

    dp[r][0] = 0 ;
    mines[r][0].first = 0 ;
    mines[r][0].second = 0 ;

    for(int i = 1 ; i <= r ; i++){
        for(int j = 1 ; j <= c ; j++){
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] ; 
            mines[i][j].first = mines[i - 1][j].first ; 
            mines[i][j].second = mines[i][j - 1].second ; 
            if(arr[i - 1][j - 1] == '#'){
                continue ;
            }
            if(j < c && arr[i - 1][j] == '.'){
                dp[i][j]++ ; 
                mines[i][j].first++ ;
            }
            if(i < r && arr[i][j - 1] == '.'){
                dp[i][j]++ ; 
                mines[i][j].second++ ;
            }
        }
    }

    cin >> tc ; 
    while(tc--){
        cin >> r1 >> c1 >> r2 >> c2 ;
        s1 = dp[r2][c2] - mines[r2][c2].second - mines[r2][c2].first ; // main
        s2 = dp[r1 - 1][c2] - mines[r1 - 1][c2].first ; // top right 
        s3 = dp[r2][c1 - 1] - mines[r2][c1 - 1].second ; // bottom left 
        s4 = dp[r1 - 1][c1 - 1] ; // top left 
        cout << s1 + s4 - s2 - s3 << '\n' ;
    }
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}