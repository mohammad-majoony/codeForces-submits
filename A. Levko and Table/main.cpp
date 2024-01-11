#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int i , num , pr = 0 ;
    cin >> i >> num ;
    for(int ind1 = 0 ; ind1 < i ; ind1++){
        for(int ind2 = 0 ; ind2 < i ; ind2++){
            if(pr == ind2) cout << num << " " ;
            else cout << 0 << " " ;
        }
        cout << '\n' ;
        pr++ ;
    } 
}

int main(){
    solve() ;
}