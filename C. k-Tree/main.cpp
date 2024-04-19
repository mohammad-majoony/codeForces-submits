    // When i wrote this code, only me and God knew how it works. Now only God knows...
    // https://codeforces.com/problemset/problem/431/C

    #include<bits/stdc++.h>
    #define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
    #define ONLINE_JUDGE
    #define _MOD (1000000007)
    #define MOD(n) (((n % _MOD) + _MOD) % _MOD)
    #define endl '\n'
    typedef long long ll ;
    using namespace std ;
    ll mem[101][2] ;
    ll n , k , d ; 

    ll dpCounter(int n , bool c){
        // base case 
        if(c && n == 0) return 1 ; 
        if(n <= 0) return 0 ; 
        // memoisation
        if(~mem[n][c]) return mem[n][c] ;
        // recursive case 
        ll res = 0 ; 
        for(int i = 1 ; i <= k ; i++){
            if(i >= d) res += MOD(dpCounter(n - i , true)) ; 
            else res += MOD(dpCounter(n - i , c)) ; 
        }
        return mem[n][c] = MOD(res) ; 
    }

    void solve(){
        cin >> n >> k >> d ;
        memset(mem , -1 , sizeof mem) ; 
        cout << dpCounter(n , false) ;
    }

    int main(){
        MAJOONI
        #ifndef ONLINE_JUDGE
        freopen("../input.txt" , "r" , stdin) ;
        freopen("../output.txt" , "w" , stdout) ;
        #endif
        // int tc ; cin >> tc ; while(tc--)
        solve() ;
    }