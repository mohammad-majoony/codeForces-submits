#include<bits/stdc++.h>
#define end '\n' ;
using namespace std ;

int solve(){
    int len , ram , num ;
    cin >> len >> ram ;
    int arr[len] ;
    map<int , int> table ;

    for(int index = 0 ; index < len ; index++) cin >> arr[index] ;
    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        if(!table.contains(arr[index])) table[arr[index]] = num ;
        else table[arr[index]] += num ;
    }

    for(auto const & [key , val] : table){
        if(key <= ram) ram += val ;
        else break ;
    }

    return ram ;
}

int main(){
    int tc ; cin >> tc ;
    while(tc--) cout << solve() << end ;
}