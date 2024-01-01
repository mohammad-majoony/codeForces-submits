#include<bits/stdc++.h>
using namespace std ;

string solve(){
    int r , c , res = 1 , minic = -1 ; 
    cin >> r >> c ;
    string txt ;
    for(int ind1 = 0 ; ind1 < r ; ind1++){
        cin >> txt ;
        for(int ind2 = 0 ; ind2 < c ; ind2++){
            if(txt[ind2] == 'R' && minic == -1) minic = ind2 ;
            else if(txt[ind2] == 'R' && minic > ind2) res = 0 ;
        }
    }
    return ((res) ? "YES\n" : "NO\n") ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() ;
}