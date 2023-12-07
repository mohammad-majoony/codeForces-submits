#include<bits/stdc++.h>
using namespace std  ;

int main(){
    int tc ; cin >> tc ;
    while(tc--){
        int a , b , count ; 
        cin >> a >> b ;
        count = min(a , b) ;
        count = min(count , (a + b) / 4) ;
        cout << count << '\n' ;
    }
}