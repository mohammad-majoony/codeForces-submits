#include<bits/stdc++.h>
#define int long long 
using namespace std ;

int32_t main(){
    int length , money , tcSeller , num , tc;
    set<int> nums ;

    cin >> tc >> money ;
    length = tc ;
    while(tc--){
        cin >> tcSeller ;
        while(tcSeller--){
            cin >> num ;
            if(num < money) nums.insert(length - tc) ;
        }
    }

    cout << nums.size() << endl ;
    for(auto num : nums) cout << num << " " ;
    cout << endl ;
}