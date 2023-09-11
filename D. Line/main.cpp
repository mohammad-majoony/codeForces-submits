#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , sums = 0 , maxi , ind = 0;
    string text ;
    cin >> length >> text ;
    ll sumInd[length] ;

    for(ll index = 0 ; index < length ; index++){
        if(text[index] == 'L') sumInd[index] = index ;
        else sumInd[index] = length - index - 1 ;
        sums += sumInd[index] ;
    }

    sort(sumInd , sumInd + length) ;
    vector<ll> res ;

    for(ll index = 0 ; index < length ; index++){
        if(sumInd[index] < length / 2){
            sums += length - 1 - (2 * sumInd[index]) ;
            res.push_back(sums) ;
        }
    }
    res.push_back(sums) ;

    ll resLength = res.size() ;

    for(ll index = 0 ; index < length ; index++){
        if(index >= resLength) cout << res[resLength - 1] << " " ;
        else cout << res[index] << " " ;
    }
    cout << endl ;
}

int main(){
    ll tc ; 
    cin >> tc ;
    while(tc--) slove() ;
}