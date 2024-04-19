// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1037/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len , lo = -1 , lz = -1 , count = 0 ;
    string t1 , t2 ; 
    cin >> len >> t1 >> t2 ; 
    
    for(int i = 0 ; i < len ; i++){
        if(t1[i] != t2[i]){
            if(t1[i] == '1'){
                if(lo != -1) count++ ; 
                lo = i ;
                if(lz != -1){
                    if(lz + 1 == lo){
                        count++ ; 
                        lo = -1 ; 
                        lz = -1 ;
                    }else{
                        count++ ; 
                        lz = -1 ;
                    }
                }else lo = i ;
            }else{
                if(lz != -1) count++ ; 
                lz = i ;
                if(lo != -1){
                    if(lo + 1 == lz){
                        count++ ; 
                        lo = -1 ; 
                        lz = -1 ;
                    }else{
                        count++ ; 
                        lo = -1 ;
                    }
                }else lz = i ;
            }
        }
    }
    if(lz != -1) count++ ; 
    if(lo != -1) count++ ; 
    cout << count ; 
}

int main(){
    MAJOONI
    // freopen("../input.txt" , "r" , stdin) ;
    // freopen("../output.txt" , "w" , stdout) ;
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}