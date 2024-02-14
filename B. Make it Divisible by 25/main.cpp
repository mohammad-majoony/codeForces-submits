#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    string num ; 
    cin >> num ; 
    int size = num.size() , p1 = 0 , p2 = 0 , mini = 18 ;
    for(int i = size - 1 ; i > -1 ; i--){
        if(!p1 && num[i] == '0') p1 = i + 1 ;
        else if(!p2 && p1 && num[i] == '0') p2 = i + 1 ;
        if(p1 && p2){
            mini = min(mini , size - p1 + (p1 - p2 - 1)) ;
            break ;
        }
    } p1 = 0 ; p2 = 0 ;
    for(int i = size - 1 ; i > -1 ; i--){
        if(!p1 && num[i] == '5') p1 = i + 1 ;
        else if(!p2 && p1 && num[i] == '2') p2 = i + 1 ;
        if(p1 && p2){
            mini = min(mini , size - p1 + (p1 - p2 - 1)) ;
            break ;
        }
    } p1 = 0 ; p2 = 0 ;
    for(int i = size - 1 ; i > -1 ; i--){
        if(!p1 && num[i] == '0') p1 = i + 1 ;
        else if(!p2 && p1 && num[i] == '5') p2 = i + 1 ;
        if(p1 && p2){
            mini = min(mini , size - p1 + (p1 - p2 - 1)) ;
            break ;
        }
    } p1 = 0 ; p2 = 0 ;
    for(int i = size - 1 ; i > -1 ; i--){
        if(!p1 && num[i] == '5') p1 = i + 1 ;
        else if(!p2 && p1 && num[i] == '7') p2 = i + 1 ;
        if(p1 && p2){
            mini = min(mini , size - p1 + (p1 - p2 - 1)) ;
            break ;
        }
    } 
    return mini ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}