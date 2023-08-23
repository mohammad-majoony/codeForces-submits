#include<bits/stdc++.h>
using namespace std ;
int main(){
    long tc , length , num ;
    string player[] = {"empty" , "First" , "Second"} ;
    int winner , take2 ;
    cin >> tc ;
    while(tc--){
        cin >> length ;
        winner = 1 ;
        take2 = 0 ;
        while(length--){
            cin >> num ;
            if(!take2){
                if(num > 1) take2 = winner ;
                else if (length) (winner == 1) ? winner = 2 : winner = 1 ;
            }
        }
        if(take2) cout << player[take2] << endl ;
        else cout << player[winner] << endl ;
    }
}