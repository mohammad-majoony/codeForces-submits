// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len ; 
    map<int , bool> can ; 
    string txt ; 
    cin >> len >> txt ; 
    len = txt.size() ; 
    ll arr[len] ; 
    ll dpm[len] , dpd[len] ; 
    for(ll i = 0 ; i < len ; i++) cin >> arr[i] ; 
    if(txt[0] == '1'){
        dpm[0] = arr[0] ;
        dpd[0] = arr[0] ; 
        can[0] = 1 ;
    }else{
        dpm[0] = 0 ;
        dpd[0] = 0 ;
    }

    for(ll i = 1 ; i < len ; i++){
        if(txt[i] == '1'){
            if(txt[i - 1] == '1'){
                if(can[i - 1]){
                    dpm[i] = dpd[i] = dpd[i - 1] + arr[i] ;    
                    can[i] = 1 ;
                }else{
                    dpm[i] = dpm[i - 1] + arr[i - 1] ; 
                    dpd[i] = max(dpm[i - 1] , dpd[i - 1]) + arr[i] ;     
                }
            }else{
                dpm[i] = max(dpm[i - 1] , dpd[i - 1]) + arr[i - 1] ; 
                dpd[i] = max(dpm[i - 1] , dpd[i - 1]) + arr[i] ; 
            }
        }else dpm[i] = dpd[i] = max(dpm[i - 1] , dpd[i - 1]) ; 
    }

    cout << max(dpm[len - 1] , dpd[len - 1]) << endl ;

}

int main(){
    MAJOONI
    // freopen("../input.txt" , "r" , stdin) ;
    // freopen("../output.txt" , "w" , stdout) ;
    ll tc ; cin >> tc ; while(tc--)
    solve() ;
}