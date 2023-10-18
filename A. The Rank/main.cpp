#include<bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
    int length , num , count = 1 ;
    cin >> length ;
    int arr[length] = {0} ;

    for(int index = 0 ; index < 4 ; index++){
        cin >> num ;
        arr[0] += num ;
    }

    for(int index = 1 ; index < length ; index++){
        for(int get = 0 ; get < 4 ; get++){
            cin >> num ;
            arr[index] += num ;
        }
        if(arr[0] < arr[index]) count++ ;
    }

    cout << count ;
}