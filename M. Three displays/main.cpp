#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len , num , mini = 0 , i1 , i2 ; cin >> len ;
    pair<ll , ll> arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i].first ; 
    for(int i = 0 ; i < len ; i++) cin >> arr[i].second ;

    for(int i = 1 ; i < len - 1 ; i++){
        i1 = 0 , i2 = 0 ;
        for(int j = 0 ; j < i ; j++){
            if(arr[i].first > arr[j].first){
                if(i1) i1 = min(i1 , arr[j].second) ;
                else i1 = arr[j].second ;
            }
        }
        for(int j = i + 1 ; j < len ; j++){
            if(arr[i].first < arr[j].first){
                if(i2) i2 = min(i2 , arr[j].second) ;
                else i2 = arr[j].second ;
            }
        }
        if(i1 && i2 && mini) mini = min(mini , i1 + i2 + arr[i].second) ;
        else if(i1 && i2) mini = i1 + i2 + arr[i].second ;

    }
    cout << ((mini) ? mini : -1) ;
}

int main(){
    MMD 
    slove() ;
}