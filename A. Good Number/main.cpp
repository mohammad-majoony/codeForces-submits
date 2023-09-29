#include<bits/stdc++.h>
#define mmd std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
typedef long long ll ;
using namespace std ;

ll solve(ll k){
    string text ;
    cin >> text ;
    ll count = 0 ;
    map<int , int> table ;
    int num ;
    for(auto ch : text){
        num = (int)(ch - '0') ;
        if(table.find(num) == table.end() && num <= k){
            table[num] = 1 ;
            count++ ; 
        }
        if(count == k + 1) return 1 ; 
    }
    return 0 ;
}

int main(){
    mmd
    ll tc , k , count = 0 ;
    cin >> tc >> k ;
    while(tc--) count += solve(k) ;
    cout << count << endl;
}