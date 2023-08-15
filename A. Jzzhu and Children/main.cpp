#include <bits/stdc++.h>
using namespace std ;
int main(){
    int length , mines , get , compare;
    cin >> length >> mines ;
    int last = 0 , res = 1 ;

    for(int i = 0 ; i < length ; i++){
        cin >> get ;
        if(last == 0 and get <= mines) res = i + 1 ;
        else if(last == 0 and get > mines){
            last = ceil(get / static_cast<double>(mines)) ;
            res = i + 1 ;
        }
        else if(last != 0 and get > mines){
            compare = ceil(get / static_cast<double>(mines)) ;
            if(compare >= last){
                last = compare ;
                res = i + 1 ;
            }
        }
    }
    
    cout << res ;
}