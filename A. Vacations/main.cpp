// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/hK6hgc8x94/contest/222255/problem/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

// ai equals 0 , the gym is closed and the contest is not carried out ;
// ai equals 1 , the gym is closed , but the contest is carried out ; c
// ai equals 2 , the gym is open and the contest is not carried out ; g
// ai equals 3 , the gym is open and the contest is carried out ; gc 

void solve(){
    ll len , num , count = 0 , last = 0 ; 
    cin >> len ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ;
        if(!num || (last == num && num != 3)){
            if(num != 3) last = 0 ; 
            count++ ;
        }
        else{
            if(last == 3 && num == 3) continue ;
            else if(num == 3 && last){
                if(last == 1) last = 2 ;
                else last = 1 ;
            }
            else last = num ;
        }
    }
    cout << count ;
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