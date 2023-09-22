#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll length , num , pervios = 0 , flag = 1 ;
    cin >> length ;
    bool increase = true ;
    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        if(num == length) increase = false ;
        else if(increase && num < pervios) flag = false ;
        else if(!increase && num > pervios) flag = false ;
        pervios = num ;
    }
    cout << ((flag)?"YES":"NO") ;
}