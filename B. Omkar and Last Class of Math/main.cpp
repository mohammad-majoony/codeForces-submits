#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll num , n , res ; cin >> num ; 
    for(int i = 2 ; i <= sqrt(num) ; i++){
        if(num % i == 0){
            cout << num / i << " " << num - num / i << "\n" ; 
            return ;
        }
    }
    cout << 1 << " " << num - 1 << "\n" ; 
}

int main(){
    MMD
    int tc ; cin >> tc ; 
    while(tc--) slove() ;
}