#include<bits/stdc++.h>
using namespace std ;

int main(){
    int length , x , y , count = 0 ;
    cin >> length ;
    int arr[length][2] ;

    for(int index = 0 ; index < length ; index++){
        cin >> x >> y ;
        arr[index][0] = x ;
        arr[index][1] = y ;
    }

    int right , left , up , down ;
    for(int ind1 = 0 ; ind1 < length ; ind1++){
        right = 0 , left = 0 , up = 0 , down = 0 ;
        for(int ind2 = 0 ; ind2 < length ; ind2++){
            if(arr[ind1][0] < arr[ind2][0] && arr[ind1][1] == arr[ind2][1]) right = 1 ;
            else if(arr[ind1][0] > arr[ind2][0] && arr[ind1][1] == arr[ind2][1]) left = 1 ;
            else if(arr[ind1][0] == arr[ind2][0] && arr[ind1][1] < arr[ind2][1]) down = 1 ;
            else if(arr[ind1][0] == arr[ind2][0] && arr[ind1][1] > arr[ind2][1]) up = 1 ;
        }
        if(right && left && up && down) count++ ;
    }

    cout << count ;
}