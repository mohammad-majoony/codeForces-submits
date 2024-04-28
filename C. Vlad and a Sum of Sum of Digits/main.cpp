// https://codeforces.com/problemset/problem/1926/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , count = 1 , get , i ; cin >> len ; 
    vector<ll> arr = {1} ;
    vector<int> num {1,0,0,0,0,0} ;
    while(len--){
        cin >> get ; 
        if(get <= arr.size()) cout << arr[get - 1] << '\n' ; 
        else{
            while(get > arr.size()){
                if(num[0] == 9){
                    i = 0 ; 
                    count = 0 ;
                    num[i]++ ;
                    while(num[i] >= 10){
                        num[i + 1]++ ; 
                        num[i] = 0 ;
                        i++ ;
                    }
                    for(auto add : num) count += add ;
                }else{
                    num[0]++ ; 
                    count++ ; 
                }
                arr.push_back(count + arr[arr.size() - 1]) ;
            }
            cout << arr[get - 1] << '\n' ;
        }
    } 
}

int main(){
    MAJOONI 
    // int tc ; cin >> tc ; while(tc--)
    solve() ;
} 