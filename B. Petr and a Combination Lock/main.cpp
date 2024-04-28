#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string slove(){
    ll len , num , get ; cin >> len ; 
    stack<ll> last , cu ; 
    last.push(0) ;
    while(len --){
        cin >> num ; 
        while(!last.empty()){
            get = last.top() ;
            last.pop() ;
            cu.push(get - num) ;
            cu.push(get + num) ;
        }
        while(!cu.empty()){
            get = cu.top() ;
            cu.pop() ;
            last.push(get) ;
        }
    }
    while(!last.empty()){
        get = last.top() ;
        last.pop() ;
        if(!(get % 360)) return "YES" ;
    }
    return "NO" ;
}

int main(){
    MMD
    cout << slove() ;
}