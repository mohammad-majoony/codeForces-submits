// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/180/problem/C

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
    string txt ; 
    cin >> txt ;
    int l = 0 , u = 0 , mini , len = txt.size() ;
    pair<int , int> mem[len] ;
    for(int i = 0 ; i < len ; i++){
        if(isupper(txt[i])) u++ ; 
        else l++ ; 
        mem[i] = make_pair(l , u) ; 
    } 
    mini = min(l , u) ; 
    for(int i = 0 ; i < len ; i++) mini = min(mini , mem[i].first + (u - mem[i].second)) ;  
    cout << mini ;

}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}