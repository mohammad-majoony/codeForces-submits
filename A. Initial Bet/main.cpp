#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll sums = 0 , num , tc = 5;
    while(tc--){
        cin >> num ;
        sums += num ;
    }
    cout << ((sums/5 == sums/5.0&&sums)?sums / 5:-1) ;
}