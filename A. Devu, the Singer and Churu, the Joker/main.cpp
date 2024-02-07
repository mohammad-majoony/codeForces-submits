#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

void solve(){
    int len , time , get = 0 , num , joke = 0 ; 
    cin >> len >> time ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        get += num ; 
    }

    get += (len - 1) * 10 ; 
    time -= get ; 
    if(time < 0) cout << -1 ; 
    else cout << time / 5 + (len - 1) * 2 ; 
}

int main(){
    MMD
    solve() ;
} 