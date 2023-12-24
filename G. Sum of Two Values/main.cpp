#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len , sumNum , num , flag = 0 , i1 , i2 ;
    cin >> len >> sumNum ;
    int arr[len] ;
    unordered_map<int , int> table {0} ;
    unordered_map<int , vector<int>> indexes ;

    for(int index = 0 ; index < len ; index++){
        cin >> num ;
        arr[index] = num ;
        table[num]++ ;
        indexes[num].push_back(index + 1) ;
    }

    for(int index = 0 ; index < len ; index++){
        num = sumNum - arr[index] ;
        if(num == arr[index] && table[num] >= 2){
            flag = 1 ;
            cout << indexes[num][0] << " " << indexes[num][1] ;
            break ;

        }
        else if(num != arr[index] && table[num] == 1){
            flag = 1 ;
            cout << indexes[num][0] << " " << index + 1 ;
            break ;
        }

    }

    if(!flag) cout << -1 ;
}