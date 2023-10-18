#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int length , count ;
    string text ;
    cin >> length ;
    int arr[length] ;
    for(int index = 0 ; index < length ; index++) cin >> arr[index] ;


    for(int index = 0 ; index < length ; index++){
        cin >> count >> text ;

        for(auto letter : text){
            if(letter == 'U'){
                if(arr[index] == 0) arr[index] = 9 ;
                else arr[index]-- ;
            }else{
                if(arr[index] == 9) arr[index] = 0 ;
                else arr[index]++ ;
            }
        }

        if(index == length - 1) cout << arr[index] << "\n" ;
        else cout << arr[index] << " " ;
    }   
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}