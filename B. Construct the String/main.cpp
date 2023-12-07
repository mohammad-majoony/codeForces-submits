#include<bits/stdc++.h>
#define end '\n' ;
using namespace std ;
typedef long long ll ;

void solve(){
    int a , b , n , iterator = 0 ;
    string chars = "abcdefghijklmnopqrstuvwxyz" ;
    cin >> n >> a >> b ;
    for(int index = 0 ; index < n ; index++){
        cout << chars[iterator++] ;
        if(iterator >= b) iterator = 0 ;
    }
    cout << end ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}