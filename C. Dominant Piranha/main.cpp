#include<bits/stdc++.h>
#define enl '\n' 
using namespace std ;

int solve(){
    int len ; cin >> len ;
    int arr[len] , maxi = 0 ;
    for(int index = 0 ; index < len ; index++){
        cin >> arr[index] ;
        maxi = max(maxi , arr[index]) ;
    }
    for(int index = 1 ; index < len ; index++){
        if(arr[index - 1] == maxi && arr[index - 1] > arr[index]) return index ;
        else if(arr[index] == maxi && arr[index - 1] < arr[index]) return index + 1 ;
    }
    return -1 ;

}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}