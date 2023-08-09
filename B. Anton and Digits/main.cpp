#include <bits/stdc++.h>
using namespace std ;

int main(){
    int two , three , five , six ;
    cin >> two >> three >> five >> six ;
    int count {0} ;

    int min256 {min(two , min(five , six))} ;
    count += min256 * 256 ;
    two -= min256 ;

    int min32 {min(two , three)} ;
    count += min32 * 32 ;
    cout << count ;
}