#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

void solve(){
    int length , start , end ; 
    string text ;
    cin >> length >> text ;
    start = 0 , end = length - 1 ;

    while(start < end){
        if(text[start] == text[end]) break; 
        start++ ;
        end-- ;
    }

    if(start == end) cout << 1 << "\n" ;
    else if(start > end) cout << 0 << "\n" ;
    else cout << end + 1 - start << "\n" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}