#include<bits/stdc++.h>
using namespace std ;

int solve(){
    int lenght = 4 , num , count = 0 ;
    while(lenght--){
        cin >> num ;
        count += num ;
    } 

    if(count == 4) return 2 ;
    if(count == 0) return 0 ;
    return 1 ;


}

int main(){
    int tc ; cin >> tc ;
    while(tc--) cout << solve() << "\n" ;
}