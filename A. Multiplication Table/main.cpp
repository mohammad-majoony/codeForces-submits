#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll n , k , start = 1 , count = 0 ;
    cin >> n >> k ;
    while(start <= n && start <= sqrt(k)){
        if(start == sqrt(k)) count += 1 ;
        else if(k % start == 0 && k / start <= n) count += 2;
        start++ ;
    }
    cout << count ;
}