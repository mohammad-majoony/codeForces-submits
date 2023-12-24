#include<bits/stdc++.h>
using namespace std ;

void solve(){
    string text ; cin >> text ;
    map<int , bool> table ;
    stack<int> lower , upper ;

    for(int index = 0 ; index < text.size() ; index++){
        if(text[index] == 'b'){
            if(!lower.empty()){
                table[lower.top()] = 1 ;
                lower.pop() ;
            }
        }
        else if(text[index] == 'B'){
            if(!upper.empty()){
                table[upper.top()] = 1 ;
                upper.pop() ;
            }
        }
        else{
            if(text[index] <= 'Z') upper.push(index) ;
            else lower.push(index) ;
        }
    }

    for(int index = 0 ; index < text.size() ; index++){
        if(!table.contains(index) && text[index] != 'B' && text[index] != 'b') cout << text[index] ;
    }

    cout << '\n' ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) solve() ;
}