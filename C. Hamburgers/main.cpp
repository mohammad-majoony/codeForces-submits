#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

ll solve(){
    string res ; 
    cin >> res ; 
    int need[3] = {0,0,0} ;
    int st[3] ; cin >> st[0] >> st[1] >> st[2] ;
    int cost[3] ; cin >> cost[0] >> cost[1] >> cost[2] ;
    for(auto l : res){
        if(l == 'B') need[0]++ ;
        else if(l == 'S') need[1]++ ;
        else need[2]++ ;
    }
    ll count = 0 , po , co , pr = (cost[0] * need[0]) + (cost[1] * need[1]) + (cost[2] * need[2]);
    cin >> po ; 
    while(true){
        if((!need[0] || st[0] <= 0) && (!need[1] || st[1] <= 0) && (!need[2] || st[2] <= 0)) break ;
        
        if(need[0] > st[0]){
            if(cost[0] * (need[0] - st[0]) <= po){
                po -= cost[0] * (need[0] - st[0]) ;
                st[0] = 0 ;
            } else return count ;
        }else st[0] -= need[0] ;

        if(need[1] > st[1]){
            if(cost[1] * (need[1] - st[1]) <= po){
                po -= cost[1] * (need[1] - st[1]) ;
                st[1] = 0 ;
            } else return count ;
        }else st[1] -= need[1] ;

        if(need[2] > st[2]){
            if(cost[2] * (need[2] - st[2]) <= po){
                po -= cost[2] * (need[2] - st[2]) ;
                st[2] = 0 ;
            } else return count ;
        }else st[2] -= need[2] ;
        count++ ;
    }
    return count + po / pr ;
}

int main(){
    MMD
    cout << solve() ;
}