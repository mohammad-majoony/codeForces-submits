#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;
unordered_map<ll , ll> path ;
unordered_map<ll , vector<ll>> neighbors ;
unordered_map<ll , ll> dis ; 
map<pair<ll , ll> , ll> weight ;
priority_queue<ll> qu ;

void print(ll v){
    if(v != 1) print(path[v]) ;
    cout << v << " " ;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll v , e ; cin >> v >> e ;
    ll v1 , v2 , w , compare ; 

    for(ll index = 0 ; index < e ; index++){
        cin >> v1 >> v2 >> w ;
        weight[{v1 , v2}] = w ;
        weight[{v2 , v1}] = w ;
        neighbors[v1].push_back(v2) ;
        neighbors[v2].push_back(v1) ;
    }

    for(ll index = 2 ; index <= v ; index++) dis[index] = 10e17 ; 

    qu.push(1) ;

    while(!qu.empty()){
        compare = qu.top() ; qu.pop() ;
        for(auto nei : neighbors[compare]){
            if(dis[nei] > weight[{compare , nei}] + dis[compare]){
                dis[nei] = weight[{compare , nei}] + dis[compare] ;
                path[nei] = compare ;    
                qu.push(nei) ;
            }
        }
    }

    if(!path.contains(v)) cout << -1 ;
    else print(v) ;
}