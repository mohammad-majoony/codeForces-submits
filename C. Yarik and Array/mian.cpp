// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1899/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

void solve(){
    ll len , maxi , num , last , sums = 0 ;
    cin >> len ; 
    cin >> last ; 
    maxi = last ; 
    sums += last ;
    for(int i = 1 ; i < len ; i++){
        cin >> num ; 
        if(sums <= 0) sums = num ;
        else{
            if(abs(last) % 2 == abs(num) % 2) sums = num ;
            else sums += num ;
        }
        last = num ;
        maxi = max(maxi , sums) ;
    }
    cout << maxi << '\n' ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}