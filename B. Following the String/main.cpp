#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    vector<int> count(26 , -1) ;
    int len , num ; 
    cin >> len ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        for(int j = 0 ; j < 26 ; j++){
            if(count[j] + 1 == num){
                cout << char('a' + j) ;
                count[j]++ ;
                break ;
            }
        }
    }
    cout << '\n' ;
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ;
    while(tc--) slove() ;
}