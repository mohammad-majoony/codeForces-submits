#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    string text ; 
    cin >> text ;
    bool flag = true ;
    vector<char> chaek ;
    ll arr[] = {0,0,0} ;
    int index = 0 ;
    for(auto letter : text){
        if(letter == '?')arr[index]++ ;
        else{
            chaek.push_back(letter) ;
            index++ ;
        }
    }
    ll sums = arr[0] + arr[1] + arr[2] ;
    if(chaek[0] == '(' and sums % 2 == 1) flag = 0 ;
    else if(chaek[0] == ')' and (arr[0] <= 0 or arr[2] <= 0 or (sums - 2) % 2 == 1)) flag = 0 ; 

    cout << ((flag)?"YES\n":"NO\n") ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}