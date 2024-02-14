#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , count = 0 , sums = 0 , neg = 0 , num ; cin >> len ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        sums += abs(num) ;
        if(num < 0) neg = 1 ;
        else if(num > 0 && neg){
            count++ ;
            neg = 0 ;
        }
    } 
    if(neg) count++ ;
    cout << sums << " " << count << '\n' ;
}

int main(){
    MMD
    int tc ;
    cin >> tc ; 
    while(tc--) solve() ;
}