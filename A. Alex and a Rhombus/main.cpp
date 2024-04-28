#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    int num , plus = 0 ; cin >> num ;
    int arr[num + 1] ; arr[0] = 1 ; 
    for(int i = 1 ; i <= num ; i++){
        arr[i] = arr[i - 1] + plus ; 
        plus += 4 ; 
    }
    cout << arr[num] ;
}

int main(){
    MMD
    slove() ;
}