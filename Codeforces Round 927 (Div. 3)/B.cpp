#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    ll len , num , last ;
    cin >> len ;
    last = 0 ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(num >= last + 1) last = num ;
        else{
            if((last + 1) % num) last = ((last + 1) / num  + 1) * num ;
            else last = last + 1 ;
        }
    }
    return last ;
}

int main(){
    MMD 
    int tc ;
    cin >> tc ;
    while(tc--) cout << slove() << '\n' ;
}