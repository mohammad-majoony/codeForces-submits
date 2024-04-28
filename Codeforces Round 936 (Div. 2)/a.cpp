#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int len , mid , counter = 0 ; 
    cin >> len ; 
    map<ll , ll> count ; 
    ll arr[len] ; 
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        count[arr[i]]++ ; 
    }
    sort(arr , arr + len) ; 
    if(len % 2) mid = len / 2 ;
    else mid = len / 2 - 1 ;
    for(int i = mid + 1 ; i < len ; i++){
        if(arr[i] == arr[mid]) counter++ ;
        else break ;
    }
    cout << counter + 1 << '\n' ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
} 