// https://codeforces.com/problemset/problem/1941/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll l1 , l2 , k , count = 0 , n ; 
    cin >> l1 >> l2 >> k ;
    ll ar1[l1] ; for(int i = 0 ; i < l1 ; i++) cin >> ar1[i] ; sort(ar1 , ar1 + l1) ; 
    ll ar2[l2] ; for(int i = 0 ; i < l2 ; i++) cin >> ar2[i] ; sort(ar2 , ar2 + l2) ;

    if(l1 < l2){
        for(int i = 0 ; i < l1 ; i++){
            if(ar1[i] < k){
                n = k - ar1[i] ;
                count += upper_bound(ar2 , ar2 + l2 , n) - ar2 ;
            }
        }
    }else{
        for(int i = 0 ; i < l2 ; i++){
            if(ar2[i] < k){
                n = k - ar2[i] ;
                count += upper_bound(ar1 , ar1 + l1 , n) - ar1 ;
            }
        }
    }

    cout << count << '\n' ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}