#include<bits/stdc++.h>
#define ll long long 
using namespace std ; 

string solve(){
    ll len , num , alice = 0 , bob = 0 , oi = 0 , ei = 0 , turn = 0 ; 
    cin >> len ;
    vector<ll> odd , even ;

    for(ll i = 0 ; i < len ; i++){
        cin >> num ;
        if(num % 2) odd.push_back(num) ;
        else even.push_back(num) ;
    }

    sort(even.begin() , even.end() , greater<ll>()) ;
    sort(odd.begin() , odd.end() , greater<ll>()) ;

    int evenS = even.size() , oddS = odd.size() ;

    for(ll i = 0 ; i < len ; i++){
        if(turn){
            if(ei < evenS && oi < oddS){
                if(even[ei] > odd[oi]) ei++ ;
                else bob += odd[oi++] ;
            }
            else if(ei < evenS){
                ei++ ;
            }else{
                bob += odd[oi++] ;
            }
        }else{
            if(ei < evenS && oi < oddS){
                if(even[ei] < odd[oi]) oi++ ;
                else alice += even[ei++] ;
            }            
            else if(ei < evenS){
                alice += even[ei++] ;
            }else{
                oi++ ;
            }
        }
        turn = (turn) ? 0 : 1 ;
    }

    if(bob == alice) return "Tie" ;
    else if(bob < alice) return "Alice" ;
    else return "Bob" ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}