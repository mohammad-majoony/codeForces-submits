#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

string solve(){
    string text ;
    cin >> text ;
    int letterSize = text.size() ;
    int nums[letterSize] ;

    for(int index = 0 ; index < letterSize ; index++){
        nums[index] = text[index] - 97 ;
    }
    sort(nums , nums + letterSize) ;

    for(int index = 1 ; index < letterSize ; index++){
        if(nums[index] - 1 != nums[index - 1]) return "NO" ;
    }
    return "YES" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) cout << solve() << "\n" ;
}