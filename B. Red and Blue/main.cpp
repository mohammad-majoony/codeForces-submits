#include<bits/stdc++.h>
#define enl '\n'
using namespace std ;

int solve(){
    int len1 , len2 , count1 = 0 , count2 = 0 , maxi1 = 0 , maxi2 = 0; 
    cin >> len1 ;
    int arr1[len1] ;
    for(int index = 0 ; index < len1 ; index++){
        cin >> arr1[index] ;
        count1 += arr1[index] ;
        maxi1 = max(maxi1 , count1) ;
    }

    cin >> len2 ;
    int arr2[len2] ;
    for(int index = 0 ; index < len2 ; index++){
        cin >> arr2[index] ;
        count2 += arr2[index] ;
        maxi2 = max(maxi2 , count2) ;
    }

    return maxi1 + maxi2 ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << enl ;
}