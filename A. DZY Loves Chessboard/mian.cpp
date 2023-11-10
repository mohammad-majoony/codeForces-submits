#include<bits/stdc++.h>
using namespace std ;

int main(){
    int row , column , turn = 1;
    cin >> row >> column ;
    string arr[row] ;

    for(int index = 0 ; index < row ; index++) cin >> arr[index] ;

    for(int ind1 = 0 ; ind1 < row ; ind1++){
        for(int ind2 = 0 ; ind2 < column ; ind2++){
            if(arr[ind1][ind2] == '.'){
                if(turn){
                    if(ind2 % 2) arr[ind1][ind2] = 'B' ;
                    else arr[ind1][ind2] = 'W' ;
                }else{
                    if(ind2 % 2) arr[ind1][ind2] = 'W' ;
                    else arr[ind1][ind2] = 'B' ;
                }
            }
        }
        turn = (turn) ? 0 : 1 ;
    }

    for(auto word : arr) cout << word << "\n" ;
}