// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/977/E

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

const int N = 2e5 + 1 ;
vector<int> gr[N] ; 
int vis[N] ; 
int f ; 

bool dfs(int cu , int par){
    // visited and in stack
    vis[cu] = 1 ; 
    for(auto node : gr[cu]){
        if(gr[cu].size() != 2) f = 2 ; // we dont have cycle or we have more than 1 cycle so it is wrong 
        else if(!vis[node]) dfs(node , cu) ; 
        else if(node != par && vis[node] != 2 && !f) f = 1 ; 
    }
    // visited and in not stack
    vis[cu] = 2 ; 
    return f ; 
}

void solve(){
    int n , m , x , y , count = 0 ; 
    cin >> n >> m ; 
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y ; 
        gr[x].push_back(y) ; 
        gr[y].push_back(x) ; 
    }
    
    for(int i = 1 ; i <= n ; i++){
        f = 0 ; 
        if(!vis[i]) if(dfs(i , 0) && f == 1) count++ ; 
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