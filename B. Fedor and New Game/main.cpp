#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int n , m , k  , count = 0 , num , dif = 0 ;
    cin >> n >> m >> k ;
    string arr[m + 1] ;
    for(int i = 0 ; i <= m ; i++){
        cin >> num ; 
        arr[i] = bitset<64>(num).to_string().substr(64 - n) ;
    }

    for(int i = 0 ; i < m ; i++){
        dif = 0 ;
        for(int j = 0 ; j < n ; j++){
            if(arr[i][j] != arr[m][j]) dif++ ;
        }
        if(dif <= k) count++ ;
    }
    cout << count ;
}

int main(){
    MMD
    solve() ;
}