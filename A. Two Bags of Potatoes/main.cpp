#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    ll y , k , n , count = 0;
    cin >> y >> k >> n ; 
    ll mul = y / k + 1 ;
    while(k * mul <= n && k * mul > y){
        cout << (k * mul++) - y << " " ;
        count++;
    }
    if(!count) cout << "-1" ;
}di