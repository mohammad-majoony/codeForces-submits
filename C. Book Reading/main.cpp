#include<bits/stdc++.h>
#define int long long 
using namespace std ;

void slove(){
    int n , m , ten = 0 , res = 0 , number , cell ;
    cin >> n >> m ;
    int nums [10] ;
    for(int index = 1 ; index < 11 ; index++){
        ten += (m * index) % 10 ;
        nums[index - 1] = (m * index) % 10 ;
    }
    number = ceill(n / m) ;
    res = ceill(number / 10) * ten ;
    cell = 0 ;
    number = floorl(ceill(n / m) / 10) * 10 * m ;
    while(number + m <= n){
        number += m ;
        res += nums[cell++] ;
    }
    cout << res << endl ;
}

int32_t main(){
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}