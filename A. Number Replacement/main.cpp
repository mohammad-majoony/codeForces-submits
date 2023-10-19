#include<bits/stdc++.h>
using namespace std ; 

string solve(){
    int length , num ;
    cin >> length ; 
    int nums[length] ;
    string text ;
    char letter ;
    map<int , char> table ; 

    for(int index = 0 ; index < length ; index++) cin >> nums[index] ;
    cin >> text ;
    for(int index = 0 ; index < length ; index++){
        letter = text[index] ;
        num = nums[index] ;
        if(!table.contains(num)) table[num] = letter ;
        if(table[num] != letter) return "NO" ;
    }

    return "YES" ;
}

int main(){
    int tc ; 
    cin >> tc ;
    while(tc--) cout << solve() << "\n" ;
}