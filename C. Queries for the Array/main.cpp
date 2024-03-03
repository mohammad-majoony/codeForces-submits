#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string slove(){
    string txt ; cin >> txt ; 
    ll count = 0 , mini = 0 , inf = LONG_LONG_MAX , len = txt.size() ;
    for(int i = 0 ; i < len ; i++){
        if(txt[i] == '+') count++ ;
        else if(txt[i] == '-'){
            count-- ;
            if(count < 0) return "NO" ;
            mini = min(mini , count) ;
            if(inf > count) inf = LONG_LONG_MAX ;
        }
        else if(txt[i] == '1'){
            if(inf == LONG_LONG_MAX) mini = count ;
            else return "NO" ;
        }
        else if(txt[i] == '0'){
            inf = min(inf , count) ;
            if(inf <= 1 || inf <= mini) return "NO" ;
        }
    }
    return "YES" ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}