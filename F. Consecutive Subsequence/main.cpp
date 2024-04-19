    // When i wrote this code, only me and God knew how it works. Now only God knows...
    // https://codeforces.com/contest/977/problem/F

    #include<bits/stdc++.h>
    #define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
    #define ONLINE_JUDGE
    #define _MOD (1000000007)
    #define MOD(n) (((n % _MOD) + _MOD) % _MOD)
    #define endl '\n'
    typedef long long ll ;
    using namespace std ;
    vector<ll> mem ;

    void solve(){
        ll len , maxi = 0 , prn , s ; 
        cin >> len ; 
        mem.resize(len) ; 
        map<ll , ll> c ; 
        for(int i = 0 ; i < len ; i++){
            cin >> mem[i] ;  
            c[mem[i]] = 1 + c[mem[i] - 1] ;
            if(maxi < c[mem[i]]){
                maxi = c[mem[i]] ;
                prn = mem[i] ;  
            }
        }
        s = prn - maxi + 1 ; 
        cout << maxi << endl ;
        for(int i = 0 ; i < len ; i++){
            if(mem[i] == s){
                s++ ; 
                cout << i + 1 << " " ;
                if(s == prn + 1) break ;
            }
        }
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