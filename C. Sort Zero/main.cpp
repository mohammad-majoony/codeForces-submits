#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length ;
    cin >> length ;
    ll arr[length] , indel = -1 ;
    for(int index = 0 ; index < length ; index++) cin >> arr[index] ;

    map <ll , ll> numInd ;
    numInd[arr[length - 1]] = length - 1 ;
    ll countInd[length] ;
    countInd[length - 1] = 1 ;

    for(int index = length - 2 ; index > -1 ; index--){
        if(indel == -1 && arr[index] > arr[index + 1]) indel = index ;
        
        if(numInd.find(arr[index]) == numInd.end()){
            numInd[arr[index]] = index ;
            countInd[index] = countInd[index + 1] + 1;
        }else countInd[index] = countInd[index + 1] ;

        if(indel != -1 && indel < numInd[arr[index]]) indel = numInd[arr[index]] ;
    }
    cout << ((indel == -1)?0:countInd[0] - countInd[indel] + 1) << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}