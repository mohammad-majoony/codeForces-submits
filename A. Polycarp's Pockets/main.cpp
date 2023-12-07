#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int len , num , maxi = 0 ; 
    unordered_map<int , int> table ;
    cin >> len ;
    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        if(table.contains(num)) table[num]++ ;
        else table[num] = 1 ;
        maxi = max(maxi , table[num]) ;
    }
    cout << maxi ;
}