#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    string str1 , str2 ;
    cin >> str1 >> str2 ;
    int len1 = str1.size() , len2 = str2.size()  ;
    if(str1 == str2) return -1 ;
    else return max(len1 , len2) ;
}

int main(){
    MMD
    cout << solve() ;
}