#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;


void print(int n){
    if(n < 26)
        cout << char(n + 'A') ;
    else{
        print(n / 26 - 1) ;
        print(n % 26) ;
    }
}

void solve(){
    string txt ; 
    cin >> txt ; 
    ll len = txt.size() ;
    ll fd = -1 , ld = -1 , fl = -1 , lal = -1 , row , column = 0 , mul = 0 ;
    for(int i = 0 ; i < len ; i++){
        if(isdigit(txt[i])){
            if(fd > -1) ld = i ;
            else fd = i ;
        }else{
            if(fl > -1) lal = i ;
            else fl = i ;
        }
    }
    if(ld == -1) ld = fd ;
    if(lal == -1) lal = fl ;

    if(fl == 0 && fd == lal + 1 && ld == len - 1){
        row = stoi(txt.substr(fd , ld - fd + 1)) ;
        for(int i = lal ; i >= fl ; i--){
            column += pow(26 , mul++) * (txt[i] - 'A' + 1) ;
        }
        cout << "R" << row << "C" << column << '\n' ;
    }else{
        row = stoi(txt.substr(fl + 1 , lal - fl + 1)) ;
        column = stoi(txt.substr(lal + 1 , len - fl)) ;
        print(column - 1) ;
        cout << row << "\n" ;
    }
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) solve() ;
}