#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    string txt ; cin >> txt ; 
    int pos = 1 , count = 4 , num ;
    for(int i = 0 ; i < 4 ; i++){
        num = txt[i] - '0' ;
        if(!num) num = 10 ;
        count += abs(num - pos) ;
        pos = num ;
    } 
    return count ;
}

int main(){
    MMD
    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}