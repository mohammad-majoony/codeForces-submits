#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string slove(){
    int len ; cin >> len ;  
    string txt[len] ;
    for(int i = 0 ; i < len ; i++) cin >> txt[i] ;
    for(int i = 0 ; i < len - 1 ; i++){
        for(int j = 0 ; j < len - 1 ; j++){
            if(txt[i][j] == '1' && txt[i + 1][j] == '0' && txt[i][j + 1] == '0') return "NO" ;
        }
    }
    return "YES" ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}