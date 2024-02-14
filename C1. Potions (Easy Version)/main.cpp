#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len , num , sums = 0 , count = 0 ;
    cin >> len ;
    priority_queue<ll , vector<ll> , greater<ll>> heap ; 
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(num >= 0){
            sums += num ; 
            count++ ;
        }else{
            if(sums + num >= 0){
                sums += num ; 
                count++ ;
                heap.push(num) ;
            }
            else if(heap.size() && heap.top() < num && sums - heap.top() + num >= 0){
                sums -= heap.top() ; 
                sums += num ; 
                heap.pop() ;
                heap.push(num) ;
            }
        }
    }
    cout << count ; 
}

int main(){
    MMD 
    solve() ;
}