// https://codeforces.com/problemset/problem/1843/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;
ll solve(){
    ll len , res = 0 ; 
    cin >> len ; 
    ll arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    sort(arr , arr + len) ; 
    for (int i = 0 ; i < len / 2 ; i++) res += (arr[len - 1 - i] - arr[i]) ;
    return res ; 

}   
int main(){
    MAJOONI
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}
