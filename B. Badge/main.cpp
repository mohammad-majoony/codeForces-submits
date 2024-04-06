// https://codeforces.com/problemset/problem/1020/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

int dfs(int s , int arr[]){
    map<int , bool> vis ;
    while(true){
        if(vis[s]) return s ;
        vis[s] = 1 ;
        s = arr[s - 1] ;
    }
}

void solve(){
    int len ; cin >> len ; 
    int arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ; 
    for(int i = 0 ; i < len ; i++) cout << dfs(i + 1 , arr) << " " ;
}

int main(){
    MAJOONI 
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
} 