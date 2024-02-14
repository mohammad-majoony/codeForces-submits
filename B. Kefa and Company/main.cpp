#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , dis , maxi = 0 , sum = 0 ;
    cin >> len >> dis ;
    pair<ll , ll> arr[len] ;
    for(ll i = 0 ; i < len ; i++) cin >> arr[i].first >> arr[i].second ;
    sort(arr , arr + len , [](auto n1 , auto n2){
        return n1.first < n2.first ;
    }) ;

    ll mines = arr[0].first , ind = 0 ; 
    for(ll i = 0 ; i < len ; i++){
        while(arr[i].first - mines >= dis){
            sum -= arr[ind++].second ;
            mines = arr[ind].first ;
        }
        sum += arr[i].second ;
        maxi = max(maxi , sum) ;
    }

    cout << maxi ;
}

int main(){
    solve() ;
}
