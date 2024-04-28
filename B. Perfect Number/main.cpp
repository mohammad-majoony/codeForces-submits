// https://codeforces.com/problemset/problem/919/B

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    int k , s = 2 , sums = 10 , ind , p = 0 ;
    cin >> k ; k-- ;
    vector<int> nums(30 , 0) ; nums[0] = 9 ; nums[1] = 1 ;
    while(k--){
        if(nums[0] == 0 || nums[1] == 9 || sums > 10){
            ind = 2 ; sums = 0 ; 

            nums[2]++ ;
            s = max(s , 3) ;

            while(ind <= s){
                if(nums[ind] == 10){
                    nums[ind + 1]++ ;
                    s = max(s , ind + 2) ;
                    nums[ind] = 0 ;
                }
                ind++ ;
            }
            for(int i = s - 1 ; i >= 2 ; i--) sums += nums[i] ;
            if(sums <= 10){
                nums[0] = 10 - sums ; 
                nums[1] = 0 ; 
            }
        }else{
            nums[0]-- ; 
            nums[1]++ ; 
        }
        if(sums > 10) k++ ;
    }
    for(int i = s - 1 ; i >= 0 ; i--) cout << nums[i] ;
}

int main(){
    MAJOONI
    solve() ;
}