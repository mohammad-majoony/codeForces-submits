#include<bits/stdc++.h>
typedef long long ll ; 
using namespace std ;

void solve(){
    int  pos[] {0,0} , count ;
    string text[8] ;
    for(int i = 0 ; i < 8 ; i++) cin >> text[i] ;

    for(int i = 1 ; i < 7 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            if(text[i][j] == '.' || j == 0 || j == 7) continue ;
            count = 0 ;

            if(i != 7 && j != 7 && text[i + 1][j + 1] == '#') count++ ;
            if(i != 7 && j != 0 && text[i + 1][j - 1] == '#') count++ ;

            if(i != 0 && j != 7 && text[i - 1][j + 1] == '#') count++ ;
            if(i != 0 && j != 0 && text[i - 1][j - 1] == '#') count++ ;

            if(count  == 4){
                pos[0] = i + 1 ;
                pos[1] = j + 1 ;
                break;
            }
        }
    }

    cout << pos[0] << " " << pos[1] << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) solve() ;
}