// https://codeforces.com/contest/1753/problem/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string solve(){
    int len , div , num ;
    cin >> len >> div ; 
    vector<int> count(div + 1 , 0) ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        count[num]++ ;
    }
    for(int i = 1 ; i < div ; i++){
        if(count[i] % (i + 1) == 0) count[i + 1] += count[i] / (i + 1) ;
        else return "NO" ;
    }
    return "YES" ;
}

int main(){
    MAJOONI 
    // int tc ; cin >> tc ; while(tc--)
    cout << solve() << '\n' ;
} 