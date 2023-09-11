#include<bits/stdc++.h>
using namespace std ;

void slove(){
    string text ;
    bool flag = true ;
    int r = 0 , b = 0 , g = 0 ;
    cin >> text ;

    for(int index = 0 ; index < 6 ; index++){
        if(text[index] == 'r') r = 1 ;
        else if(text[index] == 'g') g = 1 ;
        else if(text[index] == 'b') b = 1 ;

        else if(text[index] == 'R' && r == 0) flag = false ;
        else if(text[index] == 'B' && b == 0) flag = false ;
        else if(text[index] == 'G' && g == 0) flag = false ;
    }

    cout << ((flag)?"YES\n":"NO\n") ;
}

int main(){
    long long tc ;
    cin >> tc ;
    while(tc--) slove() ;
}