#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string slove(){
    int len ; 
    cin >> len ;
    int arr[len] , soArr[len] ;
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ;
        soArr[i] = arr[i] ;
    } 
    if(len == 1) return "-1\n" ;
    sort(soArr , soArr + len) ;
    for(int i = 0 ; i < len - 1 ; i++){
        if(arr[i] == soArr[i]) swap(soArr[i] , soArr[i + 1]) ;
    }
    if(arr[len - 1] == soArr[len - 1]) swap(soArr[len - 1] , soArr[len - 2]) ;
    for(int i = 0 ; i < len ; i++) cout << soArr[i] << " " ;
    return "\n" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tc ; 
    cin >> tc ;
    while(tc--) cout << slove() ;
}