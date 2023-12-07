#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int a , b , c , d , mul = 7 , count = numeric_limits<int>::max() ;
    cin >> a >> b >> c ;
    count = min(min(min(count , a) , b / 2) , c / 4) ;
    cout << count * mul ;
}