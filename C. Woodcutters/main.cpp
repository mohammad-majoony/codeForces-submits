#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , last , count = 1 ; 
    cin >> len ; 
    pair<ll , ll> arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i].first >> arr[i].second ;
    last = arr[0].first ;
    for(int i = 1 ; i < len - 1 ; i++){
        if(arr[i].first - arr[i].second > last){
            count++ ;
            last = arr[i].first ;
        }
        else if(arr[i].first + arr[i].second < arr[i + 1].first){
            count++ ;
            last = arr[i].first + arr[i].second ;
        }
        else last = arr[i].first ;
    }
    if(len > 1) count++ ;
    cout << count ;
}

int main(){
    solve() ;
}