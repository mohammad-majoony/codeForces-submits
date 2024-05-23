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
    ll n , k , pb , ps ; 
    cin >> n >> k >> pb >> ps ; 
    pb-- , ps-- ;
    pair<ll , ll> arr[n] ; 
    vector<ll> b , s ;  
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i].first ; 
        arr[i].first-- ; 
    }
    for(int i = 0 ; i < n ; i++) cin >> arr[i].second ;
    bool vb[n] , vs[n] ;
    while(!vb[pb]){
        b.emplace_back(arr[pb].second) ; 
        vb[pb] = 1 ;
        pb = arr[pb].first ; 
    }
    while(!vs[ps]){
        s.emplace_back(arr[ps].second) ; 
        vs[ps] = 1 ;
        ps = arr[ps].first ; 
    }

    ll sb{} , sc{} , csb{} , csc{}  ;
    for(int i {} ; i < b.size() && i < k ; i++){
        sb = max(sb , csb + b[i] * (k - i)) ; 
        csb += b[i] ; 
    }
    for(int i {} ; i < s.size() && i < k ; i++){
        sc = max(sc , csc + s[i] * (k - i)) ; 
        csc += s[i] ; 
    }

    if(sb == sc) cout << "Draw" ; 
    else if(sb > sc) cout << "Bodya" ; 
    else cout << "Sasha" ; 
    cout << endl ;  

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