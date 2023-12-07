#include<bits/stdc++.h>
#define endl '\n' ;
typedef long long ll ;
using namespace std ;

string solve(){
    string num ;
    cin >> num ;
    ll len = num.size() , change = 0 ;

    for(ll index = 1 ; index < len ; index++){
        if(int(num[index - 1] - '0') + int(num[index] - '0') >= 10) change = index - 1 ;
    }
    if(change != len - 2)
        return num.substr(0 , change) + to_string(int(num[change] - '0') + int(num[change + 1] - '0')) + num.substr(change + 2 , len - change) ;
    return num.substr(0 , len - 2) + to_string(int(num[len - 2] - '0') + int(num[len - 1] - '0')) ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) cout << solve() << endl ;
}