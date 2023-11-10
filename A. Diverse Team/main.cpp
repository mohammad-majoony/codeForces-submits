#include<bits/stdc++.h>
using namespace std ;

int main(){
    int length , count , num ; 
    cin >> length >> count ;
    vector<int> inds ;
    map<int,bool> table ;

    for(int index = 0 ; index < length ; index++){
        cin >> num ;
        if(table.contains(num)) continue ;
        if(count){
            inds.push_back(index + 1) ;
            table[num] = true ;
            count-- ;
        }
    }

    if(count) cout << "NO" ;
    else{
        cout << "YES\n" ;
        for(auto num : inds) cout << num << " " ;
    }
}