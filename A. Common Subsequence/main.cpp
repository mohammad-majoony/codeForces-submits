#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len1 , len2 , num , flag = 0 , printNum = 0 ;
    cin >> len1 >> len2 ;
    map<int , bool> table ;

    for(int index = 0 ; index < len1 ; index++){
        cin >> num ;
        table[num] = true ;
    }

    for(int index = 0 ; index < len2 ; index++){
        cin >> num ;
        if(table.contains(num)){
            printNum = num ;
        }
    }

    if(printNum){
        cout << "YES\n" ;
        cout << 1 << " " << printNum << "\n" ;
    }else cout << "NO\n" ;
}


int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}