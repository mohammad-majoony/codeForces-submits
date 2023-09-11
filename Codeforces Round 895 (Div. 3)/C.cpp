#include<bits/stdc++.h>
#define ll long long 
using namespace std  ;

void slove(){
    ll l , r , n1 , n2 , flag = 1;
    cin >> l >> r ;

    for(ll num = l ; num <= r ; num++){
        if(num == 2 or num == 1) continue;
        if(num % 2){
            n1 = num / 2 ;
            n2 = (num / 2) + 1 ;
        }else{
            cout << num / 2 << " " << num / 2 << endl ;
            flag = 0 ;
        }
    }

    if(flag) cout << "-1\n" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}