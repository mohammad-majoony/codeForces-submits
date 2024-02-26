#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len ; 
    vector<ll> ind ; 
    string txt ; cin >> txt ; len = txt.size() ;
    char s1 , s2 , s3 ;
    if(len >= 3){
        s1 = txt[0] , s2 = txt[1] , s3 = txt[2] ;
        if(len == 3 && ((s1 == 'o' && s2 == 'n' && s3 == 'e') || (s1 == 't' && s2 == 'w' && s3 == 'o'))){
            cout << 1 << '\n' ;
            cout << 1 << " " ;
            cout << '\n' ;
            return ;
        }
    }
    for(int i = 3 ; i <= len ; i++){
        if((s1 == 'o' && s2 == 'n' && s3 == 'e') || (s1 == 't' && s2 == 'w' && s3 == 'o')){
            if(s3 == txt[i]){
                ind.push_back(i - 1) ;
                s2 = s3 ; 
            }else ind.push_back(i) ;
            if(i == len) break ; 
            else s3 = txt[i] ;
        }
        else{
            if(i == len) break ;
            else s1 = s2 , s2 = s3 , s3 = txt[i] ;
        }
    }
    cout << ind.size() << '\n' ;
    for(auto i : ind) cout << i << " " ;
    cout << '\n' ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ;
    while(tc--) slove() ;
}