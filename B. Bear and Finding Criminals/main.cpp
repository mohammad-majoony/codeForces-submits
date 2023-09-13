#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    ll lenght , num , home , right , left ;
    cin >> lenght >> home ;
    ll arr[lenght] ;
    for(int index = 0 ; index < lenght ; index++) cin >> arr[index] ;
    ll count = arr[home - 1] ;
    right = home ;
    left = home - 2 ;
    while(right < lenght || left >= 0){
        if(right < lenght && left >= 0){
            if(arr[right] == arr[left]) count += arr[left] * 2 ;
        }
        else if (right < lenght) count += arr[right] ;
        else count += arr[left] ;
        right++ ; left--;

    }
    cout << count ;
}