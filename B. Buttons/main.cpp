#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    ll length , ind , count = 1 , fix = 0;
    cin >> length ;    
    ind = length ;
    while(ind - 1) count += ind-- * (1 + fix) - fix++ ;
    cout << count ;
}
