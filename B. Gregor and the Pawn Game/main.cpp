#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

int slove(){
    int len , count = 0 ; cin >> len ; 
    string t1 , t2 ; cin >> t2 >> t1 ; 
    for(int i = 0 ; i < len ; i++){
        if(t1[i] != '1') continue ;
        if(t2[i] == '0'){
            count++ ;
            t2[i] = '2' ;
        }
        else if(i > 0 && t2[i - 1] == '1') count++ ; 
        else if(i < len - 1 && t2[i + 1] == '1'){
            count++ ; 
            t2[i + 1] = '2' ;
        }
    }
    return count ; 
}

int main(){
    MMD
    int tc ; cin >> tc ; 
    while(tc--) cout << slove() << '\n' ;
}