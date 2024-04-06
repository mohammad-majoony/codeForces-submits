// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1323/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    int len , ind = -1 ;
    cin >> len ; 
    int arr[len] ; cin >> arr[0] ; 
    for(int i = 1 ; i < len ; i++){
        cin >> arr[i] ; 
        if(ind == -1 && (arr[i] % 2 == 0 || (arr[i] + arr[i - 1]) % 2 == 0)) ind = i ; 
    }
    if(ind == -1 && arr[0] % 2 == 0) ind = 0 ; 

    if(ind == -1) cout << -1 << endl ;
    else if(arr[ind] % 2) cout << 2 << endl << ind << " " << ind + 1 << endl ;
    else cout << 1 << endl << ind + 1 << endl ;

}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}