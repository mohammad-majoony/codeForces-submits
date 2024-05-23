// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/567/Aii

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<int> mem ; 

void solve(){
    int len , num , mini , maxi ; 
    cin >> len ; 
    map<int , int> pos ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        mem.push_back(num) ;    
        pos[num] = i ; 
    }
    sort(mem.begin() , mem.end()) ; 
    pair<int , int> res[len] ; 

    for(int i = 0 ; i < len ; i++){
        mini = INT_MAX , maxi = INT_MIN ;
        num = mem[i] ; 
        if(pos[num]) mini = min(mini , abs(mem[i] - mem[i - 1])) ;
        if(pos[num] != len - 1) mini =  min(mini , abs(mem[i] - mem[i + 1])) ;     

        if(pos[num]) maxi = max(maxi , abs(mem[i] - mem[0])) ;
        if(pos[num] != len - 1) maxi =  max(maxi , abs(mem[i] - mem[len - 1])) ;     

        res[pos[num]].first = mini ; 
        res[pos[num]].second = maxi ; 
    } 
    for(auto n : res) cout << n.first << " " << n .second << endl ; 
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