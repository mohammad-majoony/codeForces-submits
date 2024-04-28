#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , last , test , n1 , n2 ;
    cin >> len ;
    int arr[len] ; 
    int iLast[len] ;

    cin >> arr[0] ;
    last = arr[0] ; 
    iLast[0] = -1 ; 

    for(ll i = 1 ; i < len ; i++){
        cin >> arr[i] ; 
        if(arr[i] == last) iLast[i] = iLast[i - 1] ;
        else{
            iLast[i] = i - 1 ;
            last = arr[i] ;
        }
    }

    cin >> test ;
    while(test--){
        cin >> n1 >> n2 ;
        if(iLast[n2 - 1] >= 0 && iLast[n2 - 1] >= n1 - 1) cout << iLast[n2 - 1] + 1 << " " << n2 << '\n' ;
        else cout << -1 << " " << -1 << '\n' ;
    }
}   

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}