#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    ll length , team;
    cin >> length >> team ; 
    length -= team ;
    ll maxi = length * (length + 1) / 2 ;

    
    ll large = length % team ;
    ll normal = team - large ;

    ll count = length / team ;
    ll mini = (( count * (count + 1) / 2 ) * normal) + (( (count + 1) * (count + 2) / 2 ) * large) ;
    
    cout << mini << " " << maxi ;
}