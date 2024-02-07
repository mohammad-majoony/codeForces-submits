#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ; 
using namespace std ;

void solve(){
    ll x , y , z ; // x=max(a,b) , y=max(a,c) and z=max(b,c)
    cin >> x >> y >> z ;
    set<ll> nums ; 
    nums.insert(x) ; nums.insert(y) ; nums.insert(z) ;

    if(nums.size() == 3) cout << "NO\n" ;
    else if(nums.size() == 1) cout << "YES\n" << x << " " << x << " " << x << " " << '\n' ;
    else{
        if((x == y && x < z) || (x == z && x < y) || (z == y && z < x)) cout << "NO\n" ;
        else cout << "YES\n" << max(x , max(y , z)) << " " << min(x , min(y , z)) << " " << min(x , min(y , z)) << " " << '\n' ;
    }
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ;
    while(tc--) solve() ;
}