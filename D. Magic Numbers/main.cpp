// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/628/problem/D

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
 
string n ; 
ll m , d ; 
ll mem[2001][2][2001] ; 

ll digitDp(int i , bool last , int sum_mod){
    // base case 
    if(i == n.size()){
        if(!sum_mod) return 1 ;
        return 0 ;
    }
    // mem 
    if(~mem[i][last][sum_mod]) return mem[i][last][sum_mod] ;
    // recursive 
    int till = (last) ? n[i] - '0' : 9 ;
    ll res = 0 ;  
    for(ll j = 0 ; j <= till ; j++){
        if(i % 2){
            if(d <= till) res = MOD(res + digitDp(i + 1 , last && d == till , (sum_mod * 10 + d) % m)) ; 
            break ;
        }else if(i % 2 == 0 && j != d) res = MOD(res + digitDp(i + 1 , last && j == till , (sum_mod * 10 + j) % m)) ; 
    }
    return mem[i][last][sum_mod] = MOD(res) ; 
}

ll dp(string num){
    n = num ; 
    memset(mem , -1 , sizeof mem) ;
    return digitDp(0 , true , 0) ;
}

void solve(){
    string l , r ; 
    cin >> m >> d >> l >> r ; 
    for(int i = l.size() - 1 ; i >= 0 ; i--){
        if(l[i] == '0'){
            l[i] = '9' ; 
        }else{
            l[i] = l[i] - 1 ;
            break ;
        }
    }
    cout << MOD(dp(r) - dp(l))  ;
    
}

int main(){
    // MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}