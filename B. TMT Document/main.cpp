#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ; 
using namespace std ; 

string solve(){
    int len ; 
    string txt ; 
    cin >> len >> txt ; 
    int i = 0 , count = 0 ;  
    while(i < len){
        if(txt[i++] == 'T') count++ ; 
        else count-- ; 

        if(count > len / 3 || count < 0) return "NO" ;
    }

    return ((count == len / 3) ? "YES" : "NO") ;
 }

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << "\n" ; 
}
