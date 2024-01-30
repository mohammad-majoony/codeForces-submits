#include<bits/stdc++.h>
#define ll long long 
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;

ll solve(){
    ll len , count = 0 , num ; 
    cin >> len ;
    priority_queue<ll> nums ; 
    
    for(ll i = 0 ; i < len ; i++){
        cin >> num ; 
        if(num) nums.push(num) ;
        else{
            if(!nums.empty()){
                count += nums.top() ;
                nums.pop() ;
            }
        }
    }

    return count ; 
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << "\n" ;
}