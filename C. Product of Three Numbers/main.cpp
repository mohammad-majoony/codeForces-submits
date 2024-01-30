#include<bits/stdc++.h>
using namespace std ; 

string solve(){
    int num , n1 , n2 , n3 , n4 ; 
    cin >> num ; 
    for(int i = 2 ; i <= sqrt(num) ; i++){
        if(!(num % i)){
            n1 = i ;
            n2 = num / i ; 
            for(int j = 2 ; j <= sqrt(n1) ; j++){
                if(!(n1 % j) && n1 / j != n2 && j != n2 && n1 / j != j){
                    cout << "YES\n" ;
                    cout << n2 << " " << j << " " << n1 / j ; 
                    return "\n" ;
                }
            }
            for(int j = 2 ; j <= sqrt(n2) ; j++){
                if(!(n2 % j) && n2 / j != n1 && j != n1 && n2 / j != j){
                    cout << "YES\n" ;
                    cout << n1 << " " << j << " " << n2 / j ; 
                    return "\n" ;
                }
            }
        }
    }
    return "NO\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tc ;
    cin >> tc ; 
    while(tc--) cout << solve() ;
}