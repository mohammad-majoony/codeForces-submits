#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len , sf = 0 , fs = 0 ;
    string txt ;
    cin >> len >> txt ;

    for(int index = 1 ; index < len ; index++){
        if(txt[index - 1] == 'S' && txt[index] == 'F') sf++ ;
        else if(txt[index - 1] == 'F' && txt[index] == 'S') fs++ ;
    }

    cout << ((sf > fs) ? "YES" : "NO") ;
}