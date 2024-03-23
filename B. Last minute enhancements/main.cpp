// https://codeforces.com/problemset/problem/1466/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll num , len , res = 0 ; cin >> len ; 
    map<int , int> count ;
    map<int , int> add ;
    vector<int> ex(len * 2 + 10 , 0) ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        count[num]++ ;
        ex[num]++ ;
    }
    for(auto const& n : count){
        if(!add[n.first]) res++ ;
        if((n.second != 1 || add[n.first]) && (!ex[n.first + 1] || ex[n.first + 1] == 1)){
            res++ ; 
            add[n.first + 1] = 1 ;
        }
    }
    return res ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    cout << solve() << '\n' ;
}