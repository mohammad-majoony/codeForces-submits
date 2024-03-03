#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    string txt ; cin >> txt ; 
    ll a = 0 , b = 0 ; 
    for(auto i : txt){
        if(i == 'A') a++ ;
        else b++ ;
    }
    cout << ((a > b) ? "A\n" : "B\n") ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) slove() ;
}