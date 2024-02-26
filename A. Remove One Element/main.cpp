#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len , ind , maxi = 1 ; 
    cin >> len ; 
    ll arr[len + 1] ; arr[0] = 0 ;
    ll lastDelete[len + 1] ; lastDelete[0] = 0 ;
    ll counter[len + 1] ; counter[0] = 0 ;
    for(ll i = 0 ; i < len ; i++){
        ind = i + 1 ;
        cin >> arr[ind] ;
        if(arr[ind - 1] < arr[ind]){
            counter[ind] = counter[ind - 1] + 1 ;
            lastDelete[ind] = lastDelete[ind - 1] ;
        }
        else{
            if(ind - 2 > 0 && arr[ind - 2] < arr[ind]){
                lastDelete[ind] = counter[ind - 2] ;
                counter[ind] = counter[ind - 2] + 1 - lastDelete[ind - 2] ;
            }else{
                counter[ind] = 1 ;
                lastDelete[ind] = 0 ;
            }
        }
        if(ind - 2 > 0 && arr[ind - 2] < arr[ind] && counter[ind - 2] + 1 - lastDelete[ind - 2] > counter[ind]){
            lastDelete[ind] = counter[ind - 2] ;
            counter[ind] = counter[ind - 2] + 1 - lastDelete[ind - 2] ;
        }
        maxi = max(maxi , counter[ind]) ;
    }
    cout << maxi ;
}

int main(){
    MMD 
    slove() ;
}