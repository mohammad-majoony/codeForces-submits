// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contests/1968

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

void solve(){
    int n ; 
    cin >> n ; 
    if(n % 2){
        int res = n - 1 ; 
        for(int i = 3 ; i <= sqrt(n) ; i++){
            if(n % 3 == 0){
                res = n - i ; 
                break ;
            }
        }
        cout << res ; 
    }
    else cout << n / 2 ;
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