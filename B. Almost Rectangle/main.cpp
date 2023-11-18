#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int len ; 
    cin >> len ;
    string arr[len] ;
    int pos[2][2] , flag = 0 ;
    for(int index = 0 ; index < len ; index++) cin >> arr[index] ;

    for(int ind1 = 0 ; ind1 < len ; ind1++){
        for(int ind2 = 0 ; ind2 < len ; ind2++){
            if(arr[ind1][ind2] == '*'){
                pos[flag][0] = ind2 ;
                pos[flag][1] = ind1 ;
                flag++ ;
            }
        }
    }

    if(pos[0][0] == pos[1][0]){
        if(pos[0][0] == 0){
            arr[pos[0][1]][pos[0][0] + 1] = '*' ;
            arr[pos[1][1]][pos[0][0] + 1] = '*' ;
        }else{
            arr[pos[0][1]][pos[0][0] - 1] = '*' ;
            arr[pos[1][1]][pos[0][0] - 1] = '*' ;
        }
    }else if(pos[0][1] == pos[1][1]){
        if(pos[0][1] == 0){
            arr[pos[0][1] + 1][pos[0][0]] = '*' ;
            arr[pos[0][1] + 1][pos[1][0]] = '*' ;
        }else{
            arr[pos[0][1] - 1][pos[0][0]] = '*' ;
            arr[pos[0][1] - 1][pos[1][0]] = '*' ;
        }
    }else{
        if(pos[0][0] > pos[1][0]){
            arr[pos[1][1]][pos[0][0]] = '*' ; 
            arr[pos[0][1]][pos[1][0]] = '*' ;
        }else{
            arr[pos[1][1]][pos[0][0]] = '*' ;
            arr[pos[0][1]][pos[1][0]] = '*' ;
        }
    }

    for(auto text : arr) cout << text << "\n" ;

}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}