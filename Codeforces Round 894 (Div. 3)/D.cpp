#include<bits/stdc++.h>
using namespace std ;
long long binarySearch(long long n){
    long long low = 1 , high = 10000000000 , mid , ans = 1 ;
    while(low <= high){
        mid = (low + high) / 2 ;
        long long i = mid * (mid - 1) / 2 ;
        if(i == n) return mid ;
        if(i < n){
            ans = mid ;
            low = mid + 1 ;
        }else high = mid - 1 ;
    }
    return ans ;
}

int main(){
    long long tc ;
    cin >> tc ;
    while(tc--){
        long long n ; 
        cin >> n ;
        long long ans = binarySearch(n) ;
        long long c = ans * (ans - 1) / 2 ;
        c = n - c ;
        ans += c ;
        cout << ans << endl ;
    }
}