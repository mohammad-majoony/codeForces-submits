#include<bits/stdc++.h>
#define int long long 
using namespace std ;

void slove(){
    int lenght , num , even = 0 , odd = 0 , flag = 1 ;
    cin >> lenght ;
    for(int index = 0 ; index < lenght ; index++){
        cin >> num ;
        if(num % 2){
            if(odd){
                if(odd > num) flag = 0 ;
            } odd = num ;
        }else{
            if(even){
                if(even > num) flag = 0 ;
            }even = num ;
        }
    }
    if(flag) cout << "YES\n" ;
    else cout << "NO\n" ;
}

int32_t main(){
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}