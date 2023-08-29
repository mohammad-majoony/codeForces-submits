#include<bits/stdc++.h>
#define int long long 
using namespace std ;
int32_t main(){
    int num ; 
    cin >> num ;
    int arr[num][num] ;
    for(int index = 0 ; index < num ; index++) arr[0][index] = 1 ;
    for(int ind1 = 1 ; ind1 < num ; ind1++){
        for(int ind2 = 0 ; ind2 < num ; ind2++){
            if(ind2 == 0) arr[ind1][ind2] = 1 ;
            else arr[ind1][ind2] =  arr[ind1][ind2 - 1] + arr[ind1 - 1][ind2] ;
        }
    }
    cout << arr[num - 1][num - 1] ;
}   