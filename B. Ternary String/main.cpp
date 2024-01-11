#include<bits/stdc++.h>
using namespace std ;

int solve(){
    int one = -1 , three = -1 , two = -1 , mini = 0 , distance ;
    string txt ; 
    cin >> txt ; 
    for(int index = 0 ; index < txt.size() ; index++){
        if(txt[index] == '3') three = index ;
        else if(txt[index] == '2') two = index ;
        else one = index ;

        if(one > -1 && two > -1 && three > -1){
            distance = max(max(one , two) , three) - min(min(one , two) , three) + 1 ;
            if(mini == 0 || mini > distance) mini = distance ;
        }
    }
    return mini ;
}


int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int tc ; cin >> tc ;
    while(tc--) cout << solve() << '\n' ;
}