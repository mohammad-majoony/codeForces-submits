#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int num ; cin >> num ; 
    if(num != 2){
        int odd = 1 , even = 2 , sw = 1 , count = 0 ;
        for(int i = 0 ; i < num ; i++){
            for(int j = 0 ; j < num ; j++){
                if(sw){
                    cout << odd << " " ;
                    odd += 2 ;
                }
                else{
                    cout << even << " " ;
                    even += 2 ;
                }
                if(odd > num * num) sw = 0 ;
            }
            cout << '\n' ;
        }

    }else cout << "-1\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}