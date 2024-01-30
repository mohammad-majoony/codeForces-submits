#include<bits/stdc++.h>
#define ll long long 
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

int solve(){
    int len , maxi = -1 , num ; 
    cin >> len ;
    unordered_map<int , int> arr ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ;
        arr[num] = i + 1 ;     
    } 
    for(auto & i : arr){
        for(auto & j : arr){
            if(i.second + j.second > maxi && gcd(i.first , j.first) == 1) maxi = i.second + j.second ;
        }
    }
    return maxi ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}