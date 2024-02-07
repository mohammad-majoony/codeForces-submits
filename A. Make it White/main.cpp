#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

int solve(){
    int len , s = 0 , e = 0 ; 
    string txt ; cin >> len >> txt ; 

    for(int i = 0 ; i < len ; i++){
        if(txt[i] == 'B'){
            s = i ;
            break ;
        } 
    }

    for(int i = len - 1 ; i >= 0 ; i--){
        if(txt[i] == 'B'){
            e = i ;
            break ;
        } 
    }

    return e - s + 1 ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}