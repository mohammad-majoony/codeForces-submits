#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

void solve(){
    int len , k , maxiCount = 0 , count[] = {0 , 0} , r = 0 ; 
    string txt ; 
    cin >> len >> k >> txt ;
    for(int i = 0 ; i < len ; i++){
        count[txt[i] - 'a']++ ;
        while(min(count[0] , count[1]) > k) count[txt[r++] - 'a']-- ;
        maxiCount = max(maxiCount , count[0] + count[1]) ;
    }
    cout << maxiCount ;
}

int main(){
    MMD 
    solve() ;
}