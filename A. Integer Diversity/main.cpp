#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , num;
    cin >> len ;
    map<int , bool> table ;
    while(len--){
        cin >> num ;
        if(table.contains(num)) table[num * -1] = true ;
        else table[num] = true ;
    }
    cout << table.size() << "\n" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}