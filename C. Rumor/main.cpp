#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ;
typedef long long ll ;
using namespace std ;

unordered_map<ll , ll> li ;

ll findFa(ll num){
    if(li[num] == num) return num ;
    li[num] = findFa(li[num]) ;
    return li[num] ;
}

void solve(){
    ll len , fr , fr1 , fr2 , count = 0 ; 
    cin >> len >> fr ; 
    ll arr[len] ; 

    for(ll i = 0 ; i < len ; i++){
        cin >> arr[i] ;
        li[i + 1] = i + 1 ;
    }

    for(ll i = 0 ; i < fr ; i++){
        cin >> fr1 >> fr2 ;
        fr1 = findFa(fr1) ;
        fr2 = findFa(fr2) ;
        li[fr1] = (arr[fr1 - 1] > arr[fr2 - 1]) ? fr2 : fr1 ;
        li[fr2] = li[fr1] ;
    }

    for(ll i = 0 ; i < len ; i++){
        if(li[i + 1] == i + 1) count += arr[i] ;
    }
 

    cout << count ;
}

int main(){
    MMD 
    solve() ;
}
