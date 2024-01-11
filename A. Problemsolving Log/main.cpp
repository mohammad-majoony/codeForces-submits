#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , count = 0 ; 
    string txt ; 
    map<char , int> counter ;
    cin >> len >> txt ;
    for(int index = 0 ; index < len ; index++){
        if(counter.contains(txt[index])) counter[txt[index]]++ ;
        else counter[txt[index]] = 1 ;
        if(txt[index] - 'A' + 1 == counter[txt[index]]) count++ ;
    }
    cout << count << '\n' ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}