#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

ll solve(){
    ll len , neg = 0 , pos = 0 , turn = 0 , count = 0 , num = 0 ;
    cin >> len ; 
    for(ll index = 0 ; index < len ; index++){
        cin >> num ;
        if(turn == 0){
            if(num > 0){
                turn = 1 ;
                pos = num ;
            }else{
                turn = -1 ;
                neg = num ;
            }
        }else{
            if(num > 0 && turn == 1 && num > pos) pos = num ;
            else if(num < 0 && turn == -1 && num > neg) neg = num ;

            else if(num > 0 && turn == -1){
                turn = 1 ;
                pos = num ;
                count += neg ;
            }
            else if(num < 0 && turn == 1){
                turn = -1 ;
                neg = num ;
                count += pos ;
            }
        }
    }

    if(turn == 1) count += pos ;
    else count += neg ;

    return count ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    ll tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}