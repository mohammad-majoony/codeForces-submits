#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    int num ; cin >> num ;
    if(num <= 28) cout << "aa" << char('a' + num - 3) << '\n' ;
    else if(num <= 52) cout << "a" << char('a' + num - 27 - 1) << "z" << '\n' ;
    else cout << char('a' + num - 53) << "zz" << '\n' ;
}

int main(){
    MMD 
    int tc ; cin >> tc ;
    while(tc--) slove() ;
}