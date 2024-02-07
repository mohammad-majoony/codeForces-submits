#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int s , e , count = 0 ; 
    cin >> s >> e ;

    while(s != e){
        count++ ; 
        if(s > e || e % 2) e++ ;
        else e -= e / 2 ; 
    }
    
    cout << count ; 
}

int main(){
    solve() ;
}