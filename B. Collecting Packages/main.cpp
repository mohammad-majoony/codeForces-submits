#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , x , y , ok = 1 ; 
    vector<vector<int>> pos ;
    vector<char> res ;
    cin >> len ;
    for(int i = 0 ; i < len ; i++){
        cin >> x >> y ;
        pos.push_back({x , y}) ;
    }

    sort(pos.begin() , pos.end() , [](auto n1 , auto n2){
        return n1[0] + n1[1] < n2[0] + n2[1] ;
    }) ;

    x = 0 , y = 0 ;
    for(int i = 0 ; i < len ; i++){
        if(pos[i][0] >= x && pos[i][1] >= y){
            while(x != pos[i][0]){
                res.push_back('R') ;
                x++ ;
            }
            while(y != pos[i][1]){
                res.push_back('U') ;
                y++ ;
            }
        }else{
            ok = 0 ; 
            break ; 
        }
    }
    if(!ok) cout << "NO\n" ;
    else{
        cout << "YES\n" ;
        for(auto let : res) cout << let ;
        cout << "\n"  ;
    }
}


int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ;
    cin >> tc ; 
    while(tc--) solve() ;
}