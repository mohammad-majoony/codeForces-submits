#include<bits/stdc++.h>
using namespace std ;

int solve(){
    string txt ; 
    int o = 0 , z = 0 ; 
    cin >> txt ; 
    for(auto i : txt){
        if(i == '1') o++ ;
        else z++ ; 
    }
    if(z == o) return 0 ; 
    int i = 0 ; 
    while(o > -1 && z > -1){
        if(txt[i] == '1') z-- ;
        else o-- ;
        i++ ;
    }
    return txt.size() - i + 1 ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}