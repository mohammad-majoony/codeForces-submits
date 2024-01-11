#include<bits/stdc++.h>
using namespace std ;

struct Def{
    bool exist = false ;
};

void solve(){
    int len ; 
    string name ;
    cin >> len ;
    unordered_map<string , Def> table ;
    while(len--){
        cin >> name ;
        if(table[name].exist) cout << "YES\n" ;
        else cout << "NO\n" ;
        table[name].exist = true ;
    }
}

int main(){
    solve() ;
}