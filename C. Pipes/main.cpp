#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

string slove(){
    int len , last = 1 ; // right : 1 , up : 2 , botem : 3  
    cin >> len ; 
    int x = len - 1 , y = 1 ;
    string s1 , s2 ; cin >> s1 >> s2 ;

    while(x >= 0){
        if(last == 1){
            if(y){
                if(s2[x] - '0' < 3) x-- ;
                else{
                    last = 3 ;
                    y-- ;
                }
            }else{
                if(s1[x] - '0' < 3) x-- ;
                else{
                    last = 2 ;
                    y++ ;
                }
            }
        }else{
            if(y){
                if(s2[x] - '0' < 3) return "NO" ;
                else{
                    last = 1 ;
                    x-- ;
                }  
            }else{
                if(s1[x] - '0' < 3) return "NO" ;
                else{
                    last = 1 ;
                    x-- ;
                }  
            }
        }
    }
    return ((y) ? "NO" : "YES") ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) cout << slove() << '\n' ;
}