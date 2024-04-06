// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1091/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len , num , count = 0 ;
    vector<ll> add ;
    map<ll , ll> ex ; ex[0] = 1 ;
    cin >> len ;
    for(ll i = 1 ; i <= len ; i++){
        cin >> num ; 
        add.clear() ;
        for(int j = 1 ; j * j <= num ; j++){ 
            if(num % j == 0){
                if(j == 1) count++ ; 
                else if(j <= i) count += MOD((ex[j - 1]) ); 
                if(j <= i) add.push_back(j) ;

                if(num / j == j) continue ;

                if(num / j == 1) count++ ; 
                else if(num / j <= i) count += MOD((ex[(num / j) - 1])) ; 
                if(num / j <= i) add.push_back(num / j) ;
            }
            count = MOD(count) ;
        }
        sort(add.begin() , add.end()) ;
        for(ll i = add.size() - 1 ; i >= 0 ; i--){
            ex[add[i]] += MOD(ex[add[i] - 1]) ;
        }
    }      
    cout << MOD(count) ; 
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}