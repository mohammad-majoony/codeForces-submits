// https://codeforces.com/problemset/problem/1598/A

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , res = 1 ; 
    string arr[2] ; 
    cin >> len >> arr[0] >> arr[1] ; 
    for(int i = 1 ; i < len ; i++){
        if(arr[0][i] == '1' && arr[1][i] == '1'){
            res = 0 ; 
            break ;
        }
    }
    if(arr[1][len - 1] == '1') res = 0 ; 
    cout << ((res) ? "YES\n" : "NO\n") ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
} 