#include <bits/stdc++.h>
using namespace std ;
int main(){
    int test ;
    cin >> test ;
    for(int i = 0 ; i < test ; i++){
        int first , secend ;
        cin >> first >> secend ;
        if((first + secend - 2) % 2 == 1) cout << "Burenka" << endl ;
        else cout << "Tonya" << endl ;
    }
}