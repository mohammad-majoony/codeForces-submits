#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll slove(){
    set<char> s ;
    ll len , count = 0 , i = 0 ; cin >> len ; 
    string txt ; cin >> txt ; 
    while(i < len){
        if(!s.contains(txt[i])){
            s.insert(txt[i]) ; 
            count += len - i ;
        }
        i++ ;    
    }
    return count ;
}   

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << slove() << '\n' ;
}