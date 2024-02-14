#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

int solve(){
    int len , last1 , num , res = 0 , last2 , last2e = 0 ; 
    cin >> len >> last1 ; 
    for(int i = 1 ; i < len ; i++){
        cin >> num ;
        if(last2e){
            if(num > last1 && num > last2){
                if(last1 < last2) last1 = num ;
                else last2 = num ;
                res++ ;
            }
            else if(num > last1 || num > last2){
                if(num > last1) last2 = num ;
                else last1 = num ;
            }else{
                if(last1 < last2) last1 = num ;
                else last2 = num ;
            }
        }else{
            if(num <= last1) last1 = num ;
            else{
                last2 = num ;
                last2e = 1 ;
            }
        }
    }
    return res ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}