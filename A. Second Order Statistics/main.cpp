#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , num , count = 0; cin >> len ;
    set<int> arr ;
    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        arr.insert(num) ;
    }
    if(arr.size() <= 1) cout << "NO" ;
    else{
        for(auto num : arr){
            count++ ;
            if(count == 2){
                cout << num ;
                return 0 ;
            }
        }
    }
}