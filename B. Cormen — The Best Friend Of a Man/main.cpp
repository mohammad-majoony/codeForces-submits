#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

void solve(){
    int len , walk , extra = 0 ; 
    cin >> len >> walk ;
    int arr[len] ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ; 
    for(int i = 1 ; i < len ; i++){
        if(arr[i] + arr[i - 1] < walk){
            extra += walk - (arr[i] + arr[i - 1]) ;
            arr[i] += walk - (arr[i] + arr[i - 1]) ;
        }
    }
    cout << extra << '\n' ;
    for(int i = 0 ; i < len ; i++) cout << arr[i] << " " ; 
    cout << '\n' ;
}

int main(){
    MMD
    solve() ;
}