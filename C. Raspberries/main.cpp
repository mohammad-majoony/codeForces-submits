// https://codeforces.com/problemset/problem/1883/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int len , num , k , mini = INT_MAX , res2 = 0 ;
    priority_queue<int> heap ;  
    cin >> len >> k ;
    for(int i = 0 ; i < len ; i++){
        cin >> num ; 
        if(num % k) mini = min(mini , (num / k + 1) * k - num) ; 
        else mini = min(mini , 0) ; 

        if(k == 4){
            if(heap.size() == 2){
                if(num % 2 == 0){
                    heap.pop() ;
                    heap.push(0) ;
                }
                else if(heap.top() > (num / 2 + 1) * 2 - num){
                    heap.pop() ;
                    heap.push((num / 2 + 1) * 2 - num) ;
                }
            }else{
                if(num % 2) heap.push((num / 2 + 1) * 2 - num) ;
                else heap.push(0) ;
            }
        }
    }
    if(k == 4 && heap.size() == 2){
        res2 += heap.top() ;
        heap.pop() ;
        res2 += heap.top() ;
        mini = min(mini , res2) ; 
    }
    cout << mini << '\n' ;
}

int main(){
    MAJOONI 
    int tc ; cin >> tc ; while(tc--)
    solve() ;
}