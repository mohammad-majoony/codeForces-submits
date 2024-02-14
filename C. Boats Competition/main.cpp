#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef unsigned long long ll ;
using namespace std ;

ll solve(){
    int len , sum , maxi = 0 ; 
    cin >> len ; 
    int arr[len] ;
    for(int i = 0 ; i < len ; i++) cin >> arr[i] ;
    map<pair<int ,int> , bool> exist ; 
    unordered_map<int , int> maxCount ; 
    for(int i = 0 ; i < len ; i++){
        for(int j = i + 1 ; j < len ; j++){
            sum = arr[i] + arr[j] ;
            if(!exist.contains(make_pair(i , sum)) && !exist.contains(make_pair(j , sum))){
                exist[make_pair(i , sum)] = true ;
                exist[make_pair(j , sum)] = true ; 
                if(maxCount.contains(sum)) maxCount[sum]++ ;
                else maxCount[sum] = 1 ;
                maxi = max(maxi , maxCount[sum]) ;
            }
        }
    }
    return maxi ;
}

int main(){
    MMD
    int tc ; 
    cin >> tc ; 
    while(tc--) cout << solve() << '\n' ;
}