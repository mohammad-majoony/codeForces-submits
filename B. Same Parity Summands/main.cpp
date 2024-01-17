#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void solve(){
    ll sum , count , oddC , evenC ;
    cin >> sum >> count ;

    oddC = count - 1 ;
    evenC = (count - 1) * 2 ;

    if(sum - oddC > 0 && (sum - oddC) % 2){
        cout << "YES\n" ;
        for(int i = 0 ; i < count - 1 ; i++) cout << 1 << " " ;
        cout << sum - oddC << '\n' ;
    }
    else if(sum - evenC > 0 && (sum - evenC) % 2 == 0){
        cout << "YES\n" ;
        for(int i = 0 ; i < count - 1 ; i++) cout << 2 << " " ;
        cout << sum - evenC << '\n' ;
    }else cout << "NO\n" ;
    
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}