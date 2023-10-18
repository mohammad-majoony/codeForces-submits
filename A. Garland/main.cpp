#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

void solve(){
    string text ;
    cin >> text ;
    map<char , int> table ;
    for(char letter : text) table[letter]++ ;

    int size = table.size() ;

    if(size == 1) cout << -1 << "\n" ;
    else if(size == 4 || (size == 2 && table[text[0]] == 2) || size == 3) cout << 4 << "\n" ;
    else cout << 6 << "\n" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) solve() ;
}