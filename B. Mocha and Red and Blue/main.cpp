// https://codeforces.com/problemset/problem/1559/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int len , ind , last = 3 ; 
    string txt ;  
    cin >> len >> txt ;
    ind = len - 1 ;
    for(int i = 0 ; i < len ; i++){
        if(txt[i] != '?'){
            if(txt[i] == 'R') last = 1 ; 
            else last = 2 ;
            ind = i - 1 ;
            break ;
        }
    }

    for(int i = ind ; i >= 0 ; i--){
        if(last == 3){
            txt[i] = 'B' ;
            last = 2 ; 
        }
        else if(last == 2){
            txt[i] = 'R' ;
            last = 1 ; 
        }else{
            txt[i] = 'B' ;
            last = 2 ; 
        }
    }


    for(int i = ind + 1 ; i < len ; i++){
        if(txt[i] != '?') continue ;
        if(txt[i - 1] == 'R') txt[i] = 'B' ;
        else txt[i] = 'R' ;
    }
    cout << txt << '\n' ;
}

int main(){
    // MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}