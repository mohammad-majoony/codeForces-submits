#include<bits/stdc++.h>
#define enl '\n'
using namespace std ;

string solve(){
    int len ; 
    cin >> len ;
    int neg = len , pos = len , ans = 1 ; 
    int arr1[len] , arr2[len] ;

    for(int index = 0 ; index < len ; index++){
        cin >> arr1[index] ;
        if(arr1[index] == 1 && index < pos) pos = index ; 
        else if(arr1[index] == -1 && index < neg) neg = index ; 
    }

    // cout << neg << " " << pos << '\n' ;

    for(int index = 0 ; index < len ; index++){
        cin >> arr2[index] ;
        if(arr2[index] - arr1[index] > 0){
            if(pos >= index) ans = 0 ;
        } 
        else if(arr2[index] - arr1[index] < 0){
            if(neg >= index) ans = 0 ;
        } 
    }

    return ((ans) ? "YES" : "NO") ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}