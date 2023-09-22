#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void bubbleSort(ll arr[][2] , ll n){
    ll i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j][1] > arr[j + 1][1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) break ;
    }
}

void slove(){
    ll length , days , count = 0 , sums = 0;
    cin >> length >> days ;
    ll arr[length][2] ;
    for(ll index = 0 ; index < length ; index++){
        cin >> arr[index][1] ;
        arr[index][0] = index ;
    }
    bubbleSort(arr , length) ;

    while(length--){
        if(sums + arr[count][1] <= days){
            sums += arr[count][1] ;
            count++ ;
        }else break;
    }

    cout << count << endl ;
    for(ll index = 0 ; index < count ; index++) cout << arr[index][0] + 1 << " " ;

}

int main(){
    slove() ;
}
