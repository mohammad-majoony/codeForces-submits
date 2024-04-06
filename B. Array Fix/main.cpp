// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1948/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
typedef long long ll ;
using namespace std ;
vector<ll> mem ;

string solve(){
    ll len ; 
    cin >> len ;
    string nums[len] ;
    int last = 0 , n ; 
    for(int i = 0 ; i < len ; i++) cin >> nums[i] ; 
    for(int i = 0 ; i < len ; i++){
        if(nums[i].size() == 2){
            if(nums[i][1] >= nums[i][0] && nums[i][0] - '0' - last >= 0)
                last = nums[i][1] - '0' ;
            else{
                n = 10 * (nums[i][0] - '0') + (nums[i][1] - '0') ;
                if(n - last < 0) return "NO" ; 
                last = n ;
            }
        }else{
            if(nums[i][0] - '0' - last < 0) return "NO" ; 
            last = nums[i][0] - '0' ;
        }
    }
    return "YES" ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    cout << solve() << endl ;
}