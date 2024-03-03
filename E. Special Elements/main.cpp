#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    int len , sums , maxi = 0 , count = 0 ; cin >> len ; 
    unordered_map<int , int> ex , plus , counter ; 
    int arr[len] ;
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i] ;
        if(ex.contains(arr[i])) counter[arr[i]] += 1 ;
        else{
            ex[arr[i]] = 1 ; 
            counter[arr[i]] = 1 ;
        }
        maxi = max(maxi , arr[i]) ;
    }

    for(int i = 0 ; i < len ; i++){
        sums = arr[i] ;
        for(int j = i + 1 ; j < len ; j++){
            sums += arr[j] ;
            if(sums > maxi) break ;
            if(ex.contains(sums) && !plus.contains(sums)){
                count += counter[sums] ;
                plus[sums] = 1 ;
            }
        }    
    }
    cout << count << '\n' ;
}   

int main(){
    MMD
    int tc ; 
    cin >> tc ;  
    while(tc--) slove()  ;
}