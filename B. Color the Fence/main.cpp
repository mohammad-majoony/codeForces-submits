// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/349/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<pair<ll , ll>> mem ;

void solve(){
    ll li ; 
    cin >> li ; 
    mem.resize(9) ; 
    map<int , ll> price ; 
    for(int i = 0 ; i < 9 ; i++){
        mem[i].first = i + 1 ;
        cin >> mem[i].second ; 
        price[i + 1] = mem[i].second ;
    }
    sort(mem.begin() , mem.end() , [](auto n1 , auto n2){
        if(n1.second == n2.second) return n1.first > n2.first ; 
        return n1.second < n2.second ; 
    }) ;
    vector<int> arr(li / mem[0].second , mem[0].first) ; 
    li -= mem[0].second * arr.size() ; 
    for(int i = 0 ; i < size(arr) ; i++){
        for(int j = 9 ; j > mem[0].first ; j--){
            if(li >= price[j] - mem[0].second){
                arr[i] = j ;
                li -= price[j] - mem[0].second ; 
                break ;
            }
        }   
    }

    if(arr.size()) for(auto i : arr) cout << i ;
    else cout << -1 ;
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