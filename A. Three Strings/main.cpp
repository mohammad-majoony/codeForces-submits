#include<bits/stdc++.h>
using namespace std ;
string s1 , s2 , s3 ;

bool compare(int index){
    if(s1[index] == s2[index] && s3[index] != s2[index]) return false ;
    if(s1[index] != s2[index] && s3[index] != s2[index] && s3[index] != s1[index]) return false ;
    return true ;
}

string solve(){
    cin >> s1 >> s2 >> s3 ;
    for(int index = 0 ; index < s1.size() ; index++) if(!compare(index)) return "NO" ;
    return "YES" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    
    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}