#include<bits/stdc++.h>
using namespace std ;

int solve(){
    int len , add = 0 , rem = 0 ; 
    cin >> len ; 
    string t1 , t2 ;
    cin >> t1 >> t2 ;
    for(int i = 0 ; i < len ; i++){
        if(t1[i] == '1' && t2[i] == '0') rem++ ;
        else if(t1[i] == '0' && t2[i] == '1') add++ ;
    }

    return max(rem , add) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}