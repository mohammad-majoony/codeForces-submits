#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , first , num ;
    scanf("%d%d" , &len , &first) ; len-- ;
    while(len--) scanf("%d" , &num) ;
    if(first == 1) printf("YES\n") ;
    else printf("NO\n") ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ;
    scanf("%d" , &tc) ;
    while(tc--) solve() ; 
}
