#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

void slove(){
    ll len , div , mul = 1 ; 
    cin >> len >> div ;
    ll arr[len] , l = 0 , r = len - 1 ;
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ; 
        mul *= arr[i] ;
    }
    string txt ; cin >> txt ;
    for(auto val : txt){
        cout << mul % div << " " ;
        if(val == 'R') mul /= arr[r--] ;
        else mul /= arr[l++] ;
    }
    cout << '\n' ;
}

int main(){
    MMD 
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}