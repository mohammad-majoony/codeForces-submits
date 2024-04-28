// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1950/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    int num , last = 1 , s = 1 , row = 0 ; cin >> num ; 
    for(int i = 1 ; i <= num * 2 ; i++){
        row++ ; 
        if(row > 2){
            row = 1 ;
            s = (s) ? 0 : 1 ;  
        }
        last = s ; 
        for(int j = 1 ; j <= num ; j++){
            if(last) cout << "##" ; 
            else cout << ".." ; 
            last = (last) ? 0 : 1 ;
        }  
        cout << endl ;  
    }
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