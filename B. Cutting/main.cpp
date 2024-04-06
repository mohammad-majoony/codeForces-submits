// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/998/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
typedef long long ll ;
using namespace std ;
const ll MOD{ (ll)1e9 + 7 };
vector<ll> mem ;

void solve(){
    ll len , price , o = 0 , e = 0 , count = 0 ;
    cin >> len >> price ; 
    priority_queue<ll , vector<ll> , greater<ll>> heap ; 
    ll arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    for(int i = 0 ; i < len - 1 ; i++){
        if(arr[i] % 2) o++ ; 
        else e++ ; 
        if(o == e) heap.push(abs(arr[i] - arr[i + 1])) ; 
    }
    while(true){
        if(!heap.empty() && heap.top() <= price){
            price -= heap.top() ; 
            heap.pop() ; 
            count++ ; 
        }
        else break ;
    }
    cout << count ;
}

int main(){
    MAJOONI
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
}