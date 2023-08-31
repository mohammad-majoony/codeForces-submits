#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll n , m , two , one , count , mines ;
    cin >> n >> m ;
    two = n / 2 ;
    one = n % 2 ;
    count = two + one ;
    mines = (count % m)? m - (count % m) : 0 ;
    if(mines > two || n < m) cout << -1 ;
    else cout << two + mines + one ;
}