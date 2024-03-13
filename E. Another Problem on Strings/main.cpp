#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

ll solve(){
    ll oneC , count = 0 , lastO = -1 , lastZ = 0 , len , counter = 0 , add ;
    queue<ll> io ;
    string txt ; 
    cin >> oneC >> txt ; 
    len = txt.size() ;
    for(int i = 0 ; i < len ; i++){
        if(oneC == 0){
            if(txt[i] == '1') counter = 0 ; 
            else{
                counter++ ; 
                count += counter ;
            }
            continue ;
        }
        if(txt[i] == '1' && io.size() < oneC){
            io.push(i) ;
            lastO = i ; 
            if(i != len - 1) continue ;
        }
        if((txt[i] == '1' || i == len - 1) && io.size() == oneC){
            count++ ;
            if(txt[i] == '1') lastO = lastO + 1 ;
            count += i - lastO ;
            count += io.front() - lastZ ;
            count += (io.front() - lastZ) * (i - lastO) ;
            if(oneC == 1 && i == len - 1 && lastZ == 0 && !count) lastZ = 0 ;
            else lastZ = io.front() + 1 ;
            io.pop() ;
            io.push(i) ;
            lastO = i ;
            if(len - 1 == i && io.size() == oneC && txt[i] == '1'){
                count++ ;
                if(lastZ <= io.front())
                    count += io.front() - lastZ ;
            }
        }
    }
    return count ; 
}       

int main(){
    MAJOONI
    cout << solve() << '\n' ;
}