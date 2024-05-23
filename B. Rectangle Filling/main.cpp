// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1966/problem/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

bool solve(){
    int n , m ; 
    int bu[2] = {0 , 0} , bd[2] = {0 , 0} , br[2] = {0 , 0} , bl[2] = {0 , 0} ;
    int wu[2] = {0 , 0} , wd[2] = {0 , 0} , wr[2] = {0 , 0} , wl[2] = {0 , 0} ;
    cin >> n >> m ; 
    string l[n + 1] ; 
    for(int i = 1 ; i <= n ; i++){
        cin >> l[i] ; 
        for(int j = 1 ; j <= m ; j++){
            if(i == 1){
                if(l[i][j - 1] == 'B'){
                    if(bu[0]) bu[1] = j ; 
                    else bu[0] = j ; 
                }else{
                    if(wu[0]) wu[1] = j ; 
                    else wu[0] = j ; 
                }
            }
            if(i == n){
                if(l[i][j - 1] == 'B'){
                    if(bd[0]) bd[1] = j ; 
                    else bd[0] = j ; 
                }else{
                    if(wd[0]) wd[1] = j ; 
                    else wd[0] = j ; 
                }
            }   
        }
    }

    for(int i = 1 ; i <= n ; i++){
        if(l[i][0] == 'B'){
            if(bl[0]) bl[1] = i ; 
            else bl[0] = i ; 
        }else{
            if(wl[0]) wl[1] = i ; 
            else wl[0] = i ; 
        }  
    }

    for(int i = 1 ; i <= n ; i++){
        if(l[i][m - 1] == 'B'){
            if(br[0]) br[1] = i ; 
            else br[0] = i ; 
        }else{
            if(wr[0]) wr[1] = i ; 
            else wr[0] = i ; 
        }  
    }

    if(bu[0] == 1 && bu[1] == m && bd[0]) return 1 ; 
    if(bd[0] == 1 && bd[1] == m && bu[0]) return 1 ; 
    if(wu[0] == 1 && wu[1] == m && wd[0]) return 1 ; 
    if(wd[0] == 1 && wd[1] == m && wu[0]) return 1 ; 

    if(bl[0] == 1 && bl[1] == n && br[0]) return 1 ; 
    if(br[0] == 1 && br[1] == n && bl[0]) return 1 ; 
    if(wl[0] == 1 && wl[1] == n && wr[0]) return 1 ; 
    if(wr[0] == 1 && wr[1] == n && wl[0]) return 1 ; 

    if(l[1][0] == l[n][m - 1]) return 1 ; 
    if(l[1][m - 1] == l[n][0]) return 1 ; 
    
    return 0 ; 
}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    int tc ; cin >> tc ; while(tc--)
    cout << ((solve()) ? "YES\n" : "NO\n") ;
}   