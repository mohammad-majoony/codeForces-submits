#include<bits/stdc++.h>
using namespace std ;

void solve(){
    string txt , t1 = "0" , t2 = "0" ; 
    cin >> txt ; 
    int len = txt.size() ;
    for(int index = 1 ; index < len ; index++){
        if(txt[index] != '0'){
            t1 = txt.substr(0 , index) ;
            t2 = txt.substr(index , len - index) ;
            break ;
        }
    }
    int t1num = stoi(t1) ;
    int t2num = stoi(t2) ;

    if(t2num > t1num) cout << t1num << " " << t2num << '\n' ;
    else cout << -1 << '\n' ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    
    int tc ; cin >> tc ;
    while(tc--) solve() ;
}