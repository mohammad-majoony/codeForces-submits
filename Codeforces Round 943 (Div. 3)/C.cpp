// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

void solve(){
    int len ; 
    cin >> len ; 
    int arr[len - 1] ; 
    for(int i = 0 ; i < len - 1 ; i++) cin >> arr[i] ; 
    int res[len] ;  
    res[0] = 1000 ; 
    for(int i = 1 ; i < len ; i++) res[i] = res[i - 1] + arr[i - 1]  ;
    for(auto i : res) cout << i << " " ; 
    cout << endl ; 
}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}