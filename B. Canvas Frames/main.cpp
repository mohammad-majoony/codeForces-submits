#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , count = 0 , num , last = 0 ;
    cin >> len ; 
    unordered_map<int , int> table(0) ;
    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        table[num]++ ;
    }

    for(auto const & [key , value] : table){
        count += value / 4 ;
        if((value % 4) > 1){
            if(last){
                count++ ;
                last = 0 ;
            }
            else last = 1 ;
        }
    }

    cout << count ;
}