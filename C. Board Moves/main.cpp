// https://codeforces.com/problemset/problem/1353/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll len , count = 0 , s = 3 , add = 1 ;
    cin >> len ;
    while(s <= len){
        count += (s * 4 * add) - (add * 4) ;
        add++ ; 
        s += 2 ;
    }
    return count ;
}

int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}
