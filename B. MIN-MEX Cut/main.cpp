// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1566/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

int solve(){
    string txt ; cin >> txt ;
    int len = txt.length() , o = 0 , z = 0 , s = 0 ;
    if(txt[0] == '1') o++ ;
    else z++ ;
    for(int i = 1 ; i < len ; i++){
        if(txt[i] == '1') o++ ;
        else z++ ;
        if(txt[i] != txt[i - 1]) s++ ; 
    }
    if(s > 2) return 2 ;
    if(s == 2 && txt[0] == '0' && txt[len - 1] == '0') return 2 ; 
    if(!z) return 0 ;
    return 1 ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    cout << solve() << endl ;
}