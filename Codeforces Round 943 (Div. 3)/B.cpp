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
    ll l1 , l2 , maxi = 0 , acc = 0 ; 
    string t1 , t2 ; 
    cin >> l1 >> l2 >> t1 >> t2 ; 
    int i = 0 , j = 0 ; 
    while(i < l1 && j < l2){
        for(int k = j ; k < l2 ; k++){
            if(t1[i] == t2[k]){
                j = k + 1 ; 
                maxi++ ; 
                acc = 1 ; 
                break ;
            }
        }
        if(!acc) break ;
        acc = 0 ; 
        i++ ; 
    }
    cout << maxi << endl ; 
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