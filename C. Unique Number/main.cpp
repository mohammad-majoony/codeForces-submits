#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ; 
using namespace std ;

int solve(){
    int num , res = 0 , count = 0 , last = 9 , mul = 1 ; 
    cin >> num ; 
    while(num > count){
        if(last == 0) return -1 ; 
        
        if(num >= count + last){
            if(res) res += last * mul ;
            else res = last * mul ;
            count += last ;
        }else{
            if(res) res += (num - count) * mul ;
            else res = (num - count) * mul ;
            count = num ;
        }
        mul *= 10 ;
        last-- ;  
    }

    return (num == count) ? res : -1 ;  
}

int main(){
    MMD 
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ; 
}