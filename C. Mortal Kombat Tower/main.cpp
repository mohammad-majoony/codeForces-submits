#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , count = 0 ; cin >> len ; 
    int arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;  
    ll i = 1 ;
    count = arr[0] ;
    while(i < len - 2){
        if((arr[i] + arr[i + 1] + arr[i + 2] == 3)){
            count++ ;
            i += 2 ;
        }
        i++ ;
    }
    return count ;
}   

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << slove() << '\n' ;
}