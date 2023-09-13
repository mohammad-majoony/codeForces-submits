#include<bits/stdc++.h>
#define ll long long
using namespace std ;
int main(){
    ll length , num , count = 0 ;
    cin >> length ;
    ll nums[length];
    map<ll ,bool> table ;
    vector<ll> res ;
    for(ll index = 0 ; index < length ; index++) cin >> nums[index] ;
    for(ll index = length - 1 ; index >= 0 ; index--){
        if(!table[nums[index]]){
            res.push_back(nums[index]) ;
            table[nums[index]] = true ;
        }
    }

    ll resSize = res.size() ;
    cout << resSize << endl ;
    for(ll index = resSize - 1 ; index >= 0 ; index--) cout << res[index] << " " ;
}