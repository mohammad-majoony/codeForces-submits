#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

ll solve(){
    int len ; 
    cin >> len ;
    pair<ll , ll> arr[len] ;
    ll maxi = 0 , last = 0 ;
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i].first >> arr[i].second ;
        maxi = max(maxi , arr[i].second) ;
    }
    sort(arr , arr + len , [](auto n1 , auto n2){
        if(n1.first == n2.first) return n1.second < n2.second ;
        return n1.first < n2.first ;
    }) ;

    for(int i = 0 ; i < len ; i++) last = (last <= arr[i].second) ? arr[i].second : arr[i].first ;

    return last ;
}

int main(){
    MMD 
    cout << solve() ;
}