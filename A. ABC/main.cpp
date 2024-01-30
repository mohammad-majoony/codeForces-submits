#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int len , ans = 0 , pos2 = 0 ;
    string txt ; 
    cin >> len >> txt ;

    for(int i = 1 ; i < len ; i++){
        if(txt[i] == txt[i - 1]){
            ans = 1 ;
            break ;
        }
    }

    if(ans) return "NO\n" ;

    for(int i = 2 ; i < len ; i++){
        if(txt[i - 2] == txt[i]){
            pos2 = 1 ;
            break ;
        }
   }

   if(pos2) return "NO\n" ;

   return "YES\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tc ;
    cin >> tc ; 
    while(tc--) cout << solve() ;
}