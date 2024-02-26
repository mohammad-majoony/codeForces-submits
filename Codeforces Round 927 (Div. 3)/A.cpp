#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    int len , count = 0 ; 
    string txt ; 
    cin >> len >> txt ; 
    for(int i = 0 ; i < len ; i++){
        if(txt[i] == '@') count++ ;
        else if(txt[i] == '*' && i < len - 1 && txt[i + 1] == '*') break ;
    }
    cout << count << '\n' ;
}

int main(){
    MMD 
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}