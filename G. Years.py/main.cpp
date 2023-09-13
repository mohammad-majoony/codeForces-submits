#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    ll length , n1 , n2 ;
    cin >> length ;
    map<ll , ll> table ;
    
    while(length--){
        cin >> n1 >> n2 ;
        table[n1]++ ;
        table[n2]-- ;
    }

    ll count = 0 , maxi = 0 , maxiTime = 0  ;
    for(auto vr : table){
        count += vr.second ;
        if(count > maxi){
            maxi = count ; 
            maxiTime = vr.first ;
        }
    }

    cout << maxiTime << " " << maxi ;
}