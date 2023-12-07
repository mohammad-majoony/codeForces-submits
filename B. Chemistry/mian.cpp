#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
    int len , rem , ans = 0 ;
    cin >> len >> rem ;
    string text ; 
    cin >> text ; 
    map<char , int> table ;
    for(auto ch : text) table[ch]++ ;
    for(auto const & [key , val] : table) ans += val % 2 ;
    cout << ((rem + 1 < ans) ? "NO\n" : "YES\n") ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}