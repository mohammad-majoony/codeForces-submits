#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll length , num , flag = 0 ;
    cin >> length ;
    ll arr[10] ;
    memset(arr , 0 , sizeof(arr)) ;
    vector<ll> nums ;

    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        arr[num % 10] += 1 ;
        if(arr[num % 10] <= 3) nums.push_back(num % 10) ;  
    }

    length = nums.size() ;

    for(ll ind1 = 0 ; ind1 < length ; ind1++){
        for(ll ind2 = ind1 + 1 ; ind2 < length ; ind2++){
            for(ll ind3 = ind2 + 1 ; ind3 < length ; ind3++){
                if((nums[ind1] + nums[ind2] + nums[ind3]) % 10 == 3) flag = 1 ;
                if(flag) break;
            }
        }
    }

    cout << ((flag)?"YES\n":"NO\n") ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}