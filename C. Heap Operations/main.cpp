#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    ll len , num ; cin >> len ; 
    priority_queue<ll , vector<ll> , greater<ll>> heap ; 
    queue<string> answer ; 
    string t ; 
    for(int i = 0 ; i < len ; i++){
        cin >> t ; 
        if(t == "removeMin"){
            if(heap.empty()){
                answer.push("insert 0") ;
                heap.push(0) ;
            }
            heap.pop() ;
            answer.push("removeMin") ;
        }
        else if(t == "insert"){
            cin >> num ; 
            heap.push(num) ;
            answer.push("insert " + to_string(num)) ;
        }
        else if(t == "getMin"){
            cin >> num ; 
            while(!heap.empty() && heap.top() < num){
                heap.pop() ;
                answer.push("removeMin") ;
            }
            if(heap.empty() || heap.top() != num){
                heap.push(num) ;
                answer.push("insert " + to_string(num)) ;
            }
            answer.push("getMin " + to_string(num)) ;
        }
    }
    cout << answer.size() << '\n' ;
    while(answer.size()){
        cout << answer.front() << '\n' ;
        answer.pop() ;
    }
}   

int main(){
    // MMD
    slove()  ;
}