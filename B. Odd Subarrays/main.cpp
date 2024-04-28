// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1686/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len , last , count = 0 , num , gl = 0 ;
    cin >> len ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(gl){
            if(num < last){
                count++ ; 
                gl = 0 ; 
            }else{
                last = num ;
            }
        }else{
            last = num ; 
            gl = 1 ;
        }
    } 
    cout << count << endl ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}