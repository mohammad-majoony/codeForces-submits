#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int length , num ;
    cin >> length ;
    for(int index = 0 ; index < length ; index++) cin >> num ;
    num = 0 ;
    length = 10 - length ;
    for(int index = length - 1 ; index > 0 ; index--) num += (6 * index) ;
    cout << num << "\n" ;

}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}