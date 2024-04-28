// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1409/F

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE 
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

int mem[201][201][201] ; 
int len , rep ; 
string t1 , t2 ; 

int dp(int i , int k , int count){
    if(i == len) return 0 ; 
    if(~mem[i][k][count]) return mem[i][k][count] ; 
    int res = 0 ; 
    if(!k){
        if(t2[0] == t2[1] && t1[i] == t2[0]) res = count + dp(i + 1 , k , count + 1) ; 
        else if(t1[i] == t2[1]) res = count + dp(i + 1 , k , count) ; 
        else if(t1[i] == t2[0]) res = dp(i + 1 , k , count + 1) ; 
        else res = dp(i + 1 , k , count) ; 
    }
    else{
        if(t2[0] == t2[1] && t1[i] == t2[0]) res = count + dp(i + 1 , k , count + 1) ; 
        else if(t1[i] == t2[1]) res = max({ count + dp(i + 1 , k , count) , dp(i + 1 , k - 1 , count + 1) }) ; 
        else if(t1[i] == t2[0]) res = max({ dp(i + 1 , k , count + 1) , count + dp(i + 1 , k - 1 , count) }) ; 
        else{
            if(t2[0] == t2[1]) res = max({ count + dp(i + 1 , k - 1 , count + 1) , dp(i + 1 , k , count) }) ; 
            else res = max({ dp(i + 1 , k - 1 , count + 1) , count + dp(i + 1 , k - 1 , count) , dp(i + 1 , k , count) }) ; 
        }
    }
    return mem[i][k][count] = res ; 
}

void solve(){
    cin >> len >> rep >> t1 >> t2 ;
    memset(mem , -1 , sizeof mem) ;
    cout << dp(0 , rep , 0) ;  
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