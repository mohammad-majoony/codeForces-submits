#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) ;
    ll tc , num ;
    cin >> tc ;

    while(tc--){
        cin >> num ;
        ll numSqr = sqrt(num) ;
        
        if(numSqr * numSqr == num){
            bool flag = true ;
            for(ll index = 2 ; index * index <= numSqr ; index++){
                if(numSqr % index == 0){
                    flag = false ;
                    break;
                }
            }
            if(numSqr == 1 || !flag) cout << "NO\n" ;
            else cout << "YES\n" ;
        }else cout << "NO\n" ;
    }
}