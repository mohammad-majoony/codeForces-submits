#include<bits/stdc++.h>
#define int long long 
using namespace std ;

int32_t main(){
    string text ;
    cin >> text ;
    int change = 0 , length = text.size() ;
    for(int index = 0 ; index < length / 2 ; index++)
        if(text[index] != text[length - index - 1]) change++ ;
    cout << ((change==1||(length%2&&change==0))?"YES":"NO") ;
}