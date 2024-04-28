// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1950/C

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
    int num = (txt[0] - '0') * 10 + (txt[1] - '0') ; 
    if(num >= 12){
        if(num == 12) cout << txt << " PM" << endl ;
        else{
            num -= 12 ; 
            if(num >= 10) cout << num << ":" << txt[3] << txt[4] << " PM" << endl ;
            else cout << "0" << num << ":" << txt[3] << txt[4] << " PM" << endl ;
        }
    }else{
        if(!num) cout << "12:" << txt[3] << txt[4] << " AM" << endl ;
        else if(num >= 10) cout << txt << " AM" << endl ;
        else cout << "0" << num << ":" << txt[3] << txt[4] << " AM" << endl ;
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