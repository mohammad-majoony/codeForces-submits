#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , turn = 0 , ind = 0 , find1 = 0 ; 
    string num ; 
    cin >> len >> num ; 
    int ar0[len] , ar1[len] ;

    for(auto let : num){
        if(find1){
            ar0[ind] = '0' ;
            ar1[ind] = let ;
        }
        else if(let == '2'){
            ar0[ind] = '1' ;
            ar1[ind] = '1' ;
        }
        else if(let == '0'){
            ar0[ind] = '0' ;
            ar1[ind] = '0' ;
        }
        else{
            ar0[ind] = '1' ;
            ar1[ind] = '0' ; 
            find1 = 1 ;
        }
        ind++ ;
    }

    for(auto n : ar0) cout << n - '1' + 1 ; 
    cout << '\n' ;
    for(auto n : ar1) cout << n - '1'+ 1 ; 
    cout << '\n' ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ; 
}