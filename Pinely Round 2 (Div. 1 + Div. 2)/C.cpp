#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
void slove(){
    ll length , op , mex = -1 ;
    cin >> length >> op ;
    op %= (length + 1) ;
    vector<ll> vec1(length + 1) ;
    vector<ll> vec2(length + 1 , 0);
    for(ll index = 1 ; index <= length ; index++){
        cin >> vec1[index] ;
        vec2[vec1[index]]++ ;
    }
    for(ll index = 0 ; index <= length ; index++){
        if(vec2[index] == 0){
            mex = index ;
            break;
        }
    }
    // akharin op
    vec1[0] = mex ;
    for(ll index = 0 ; index <= length ; index++){
        if(length < (index + op)) vec2[(index + op) % (length + 1)] = vec1[index] ;
        else vec2[index + op] = vec1[index] ;
    }
    for(ll index = 1 ; index <= length ; index++) cout << vec2[index] << " " ;
    cout << endl ; 
}
int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}