#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int len , k ; 
    cin >> len >> k ;
    if(k == 0){
        for(int i = len ; i > 0 ; i--) cout << i << " " ;
    }else{
        cout << 1 << " " ;
        int s = len - k + 1 , p = s - 1;
        for(int i = 0 ; i < k ; i++) cout << s++ << " " ;
        for(int i = 0 ; i < len - k - 1 ; i++) cout << p-- << " " ;
    }
    cout << '\n' ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}