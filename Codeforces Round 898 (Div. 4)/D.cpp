#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , k , count = 0  , kCount = 0 , bCount = 0;
    string text ; 
    cin >> length >> k >> text ;
    for(ll index = 0 ; index < length ; index++){
        if(text[index] == 'B') bCount++ ;

        if(bCount) kCount++ ;

        if(kCount == k or index == length - 1){
            if(bCount) count++ ;
            kCount = 0 ;
            bCount = 0 ;
        }

    }
    cout << count << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}