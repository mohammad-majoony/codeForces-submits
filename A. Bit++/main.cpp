#include<bits/stdc++.h>
using namespace std ;

void solve(){
    string txt ; 
    int len , res = 0 ; 
    cin >> len ;
    while(len--){
        cin >> txt ;
        if(txt[0] == txt[1] && txt[0] == '+') res++ ;
        else if(txt[0] == txt[1] && txt[0] == '-') res-- ;
        else if(txt[2] == txt[1] && txt[1] == '+') res++ ;
        else if(txt[2] == txt[1] && txt[1] == '-') res-- ;
    }
    cout << res ; 
}

int main(){
    solve() ;
}