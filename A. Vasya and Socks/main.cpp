#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main(){
    int count , m , days = 0 ; 
    cin >> count >> m ; 

    while(count > 0){
        days++ ; count-- ;
        if(days % m == 0) count++ ;
    }

    cout << days ;
}