#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int r , c , count = 0 ;
    cin >> r >> c ;
    count += r * (c / 2) ;
    if(c % 2){
        count += r / 2 ;
        if(r % 2) count++ ;
    }
    cout << count << "\n" ;
} 

int main(){
    int tc ; 
    cin >> tc ;
    while(tc--) solve() ;
}