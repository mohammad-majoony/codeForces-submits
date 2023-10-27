#include<bits/stdc++.h>
using namespace std ; 
typedef long long ll ;

int main(){
    ll length , compare , count = 1 , sec , last ;
    cin >> length >> compare >> last ;
    for(ll index = 0 ; index < length - 1 ; index++){
        cin >> sec ;
        if(sec - last <= compare){
            count++ ;
        }else{
            count = 1 ;
        }
        last = sec ;
    }
    cout << count ;
}