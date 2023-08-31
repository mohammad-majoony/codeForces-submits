#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , num , maxSameInt = 0;
    cin >> length ;
    set<ll> setOfNums ;
    map<ll ,ll> table ;
    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        setOfNums.insert(num) ;
        maxSameInt = max(maxSameInt , ++table[num]) ;
    }
    ll setLength = setOfNums.size() ;
    if(maxSameInt <= setLength - 1) cout << maxSameInt << endl ;
    else if(maxSameInt - setLength + 1 > 1) cout << setLength << endl ;
    else cout << setLength - 1 << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--)slove() ;
}