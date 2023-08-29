#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    string n1, n2; 
    ll length ;
    cin >> length >> n1 >> n2 ;

    ll count = 0, mines, ac; 

    for(int index = 0 ; index < length ; index++){

        mines = abs(int(n1[index]) - int(n2[index])) ; 

        ac = min(int(n1[index]) , int(n2[index])) + (10 - max(int(n1[index]), int(n2[index]))) ; 

        count += min(mines, ac) ;
    } 
    cout << count ;
}