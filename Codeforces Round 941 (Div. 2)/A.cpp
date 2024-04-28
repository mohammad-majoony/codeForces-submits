// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
typedef long long ll ;
using namespace std ;

void solve(){
    int n , k , count = 0 , num , add = 0 ; 
    cin >> n >> k ; 
    map<int , int> counter ; 
    for(int i = 0 ; i < n ; i++){
        cin >> num ; 
        counter[num]++ ; 
    }
    vector<int> vec ; 
    for(auto n : counter) vec.push_back(n.second) ; 
    sort(vec.begin() , vec.end()) ; 

    for(int i = vec.size() - 1 ; i >= 0 ; i--){
        int c = count + vec[i] ; 
        count = 0 ; 
        if(c < k){
            add += c ; 
            count = 0 ; 
        }
        else count += k - 1 ;
    }

    cout << count + add << endl ;
}

int main(){
    MAJOONI
    #ifndef ONLINE_JUDGE
    freopen("../input.txt" , "r" , stdin) ;
    freopen("../output.txt" , "w" , stdout) ;
    #endif
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}