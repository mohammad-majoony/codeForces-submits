#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , maxiK , countF = 0 , ans = 0 , tSize ;
    cin >> length >> maxiK ;
    ll tree[length] , fruit[length] ;
    for(ll index = 0 ; index < length ; index++) cin >> fruit[index] ;
    for(ll index = 0 ; index < length ; index++) cin >> tree[index] ;

    queue<ll> table ;

    if(fruit[0] <= maxiK){
        countF += fruit[0] ;
        table.push(fruit[0]) ; 
        ans = 1 ;
    }

    for(ll index = 0 ; index < length - 1 ; index++){
        if(table.empty()){
            if(fruit[index] <= maxiK){
                countF += fruit[index] ;
                table.push(fruit[index]) ; 
                if(1 > ans) ans = 1 ;
            }else continue ; 
        } 

        if(tree[index] % tree[index + 1] == 0){
            while(countF + fruit[index + 1] > maxiK && table.empty() == false){
                countF -= table.front() ;
                table.pop() ; 
            }
            if(countF + fruit[index + 1] <= maxiK){
                countF += fruit[index + 1] ;
                table.push(fruit[index + 1]) ; 
                tSize = table.size() ;
                if(tSize > ans) ans = tSize ;
            }
        }
        
        else{
            table = queue<ll>() ; 
            countF = 0 ;
        }
    }

    if(fruit[length - 1] <= maxiK && table.empty()) ans = (ans == 0)?1:ans ; 

    cout << ans << endl ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}