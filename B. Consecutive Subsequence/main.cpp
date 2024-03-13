// https://codeforces.com/gym/509552/problem/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void pr(ll i , pair<ll , ll> ind[]){
    if(i == ind[i - 1].second){
        cout << i << " " ;
        return ; 
    }else{
        pr(ind[i - 1].second , ind) ; 
        cout << i << " ";
    }
}

void solve(){
    ll len ; 
    cin >> len ; 
    ll arr[len] ; 
    pair<ll , ll> ind[len] ; 
    pair<ll , ll> maxi = make_pair(1 , 1) ; 
    map<ll , ll> exInd ; 
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        ind[i] = make_pair(1 , i + 1) ;
        exInd[arr[i]] = i + 1 ;
        if(exInd[arr[i] - 1]){
            ind[i].first = 1 + ind[exInd[arr[i] - 1] - 1].first ;
            ind[i].second =  exInd[arr[i] - 1] ;
            if(ind[i].first > maxi.first){
                maxi.first = ind[i].first ; 
                maxi.second = i + 1 ; 
            }
        }
    }
    cout << maxi.first << '\n' ;
    pr(maxi.second , ind) ; 
}

int main(){
    MAJOONI
    solve() ;
}
