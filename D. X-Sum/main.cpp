#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    ll row , column , count , maxi = 0 , x , y;
    cin >> row >> column ;
    ll arr[row][column] ;
    for(int i = 0 ; i < row ; i++)
        for(int j = 0 ; j < column ; j++) cin >> arr[i][j] ;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            count = arr[i][j] ;
            // top right
            x = i + 1 ;
            y = j + 1 ;
            while((0 <= x && x < row ) && (0 <= y && y < column)) count += arr[x++][y++] ;
            // top left
            x = i - 1 ;
            y = j + 1 ;
            while((0 <= x && x < row ) && (0 <= y && y < column)) count += arr[x--][y++] ;
            // bottem right
            x = i + 1 ;
            y = j - 1 ;
            while((0 <= x && x < row ) && (0 <= y && y < column)) count += arr[x++][y--] ;
            // bottem left
            x = i - 1 ;
            y = j - 1 ;
            while((0 <= x && x < row ) && (0 <= y && y < column)) count += arr[x--][y--] ;

            maxi = max(maxi , count) ;
        }
    }
    cout << maxi << endl ;
}


int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ; 
}