#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int num , count = 0 , start = 1 , add ; 
    cin >> num ;
    while(start <= num){
        count++ ;
        add = pow(10 , (to_string(start).size() - 1)) ;
        start += add ;
    }
    cout << count << "\n" ;
}

int main(){
    int tc ; 
    cin >> tc ;
    while(tc--) solve() ;
}