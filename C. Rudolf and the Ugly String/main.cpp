// https://codeforces.com/problemset/problem/1941/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

void solve(){
    ll len , count = 0 ; cin >> len ; 
    string txt ; cin >> txt ; 
    char x , y , z ; 

    for(int i = 0 ; i < len ; i++){
        if(!i) x = txt[i] ; 
        else if(i == 1) y = txt[i] ; 
        else{
            z = txt[i] ;
            if(x == 'm' && y == 'a' && z == 'p'){
                if(i < len - 1 && txt[i + 1] == 'p') y = z ;
                count++ ;
            }
            else if(x == 'p' && y == 'i' && z == 'e'){
                y = z ;
                count++ ;
            }
            else{
                x = y ; 
                y = z ;
            }
        }
    }

    cout << count << '\n' ;
}

int main(){
    MAJOONI
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}