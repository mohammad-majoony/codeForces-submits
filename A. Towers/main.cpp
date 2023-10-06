#include<bits/stdc++.h>
#define ll long long 
using namespace std ; 

int main(){
    ll length , sets = 0 , num , maxi = 0;
    cin >> length ;
    map<ll , ll> table ;
    
    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        if(table.find(num) == table.end()){
            sets++ ;
            table[num] = 1 ;
        }else table[num]++ ;
        maxi = (table[num] > maxi) ? table[num] : maxi ;
    }

    cout << maxi << " " << sets ;
}