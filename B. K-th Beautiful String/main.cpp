#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int len , k , count = 0 ; 
    cin >> len >> k ; 
    int pos1 = 2 , pos2 = 0 ;  
    while(count < k){
        if(k - count <= pos1 - 1){
            pos2 += k - count ;
            break ;           
        }else{
            count += pos1 - 1 ;
            pos1++ ;
        }
    }
    for(int i = 0 ; i < len ; i++){
        if(i == len - pos1 || i == len - pos2) cout << "b" ;
        else cout << "a" ;
    } cout << '\n' ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}