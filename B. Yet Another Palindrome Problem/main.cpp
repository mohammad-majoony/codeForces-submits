#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , num , flag = 0;
    cin >> length ;
    map<ll , vector<ll>> table;
    for(ll index = 0 ; index < length ; index++){
        cin >> num ; 
        table[num].push_back(index) ;
        if(table[num].back() - table[num][0] > 1) flag = 1 ;  
    }
    cout << ((flag)?"YES\n":"NO\n") ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}