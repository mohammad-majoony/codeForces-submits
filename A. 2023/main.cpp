#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void solve(){
    int len , count , num ; 
    ll sums = 1 ;
    cin >> len >> count ; 
    for(int index = 0 ; index < len ; index++){
        cin >> num ; 
        sums *= num ;
    }
    int pr = 2023 / sums ; 
    if(pr * sums == 2023){
        cout << "YES\n" << pr << " " ;
        for(int index = 0 ; index < count - 1 ; index++) cout << "1 " ;
        cout << "\n" ;
    }else cout << "NO\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}