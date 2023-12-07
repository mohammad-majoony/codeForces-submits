#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    ll len ;
    cin >> len ;
    ll arr[100001] {0} , num ;
    while(len--){
        cin >> num ;
        arr[num] += num ;
    }
    ll current = 0 , past = 0 , temp ;
    for(auto number : arr){
        temp = current ;
        current = max(current , past + number) ;
        past = temp ;
    }
    cout << current ;
}