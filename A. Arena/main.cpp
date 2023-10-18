#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int length , min = 101 , num ; 
    cin >> length ;
    map<int ,int> table ;

    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        table[num]++ ;
        min = (num < min) ? num : min ;
    }

    cout << length - table[min] << '\n' ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}