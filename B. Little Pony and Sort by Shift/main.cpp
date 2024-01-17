#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len , count = 0 , num , last , changeInd , first ; 
    cin >> len >> last ;
    first = last ;
    changeInd = len ;
    for(int index = 1 ; index < len ; index++){
        cin >> num ;
        if(index == len - 1 && first < num) count++ ;
        if(last > num){
            count++ ;
            changeInd = index ;
        }
        last = num ;
    }
    cout << ((count <= 1) ? len - changeInd : -1) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    solve() ;
}