#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main(){
    ll a , b , d , count = 0 , add = 0 , num ;
    cin >> a >> b >> d ;
    for(ll index = 0 ; index < a ; index++){
        cin >> num ;
        if(num > b) continue ;
        add += num ;
        if(add > d){
            count++ ;
            add = 0 ;
        }
    }
    cout << count ;
}