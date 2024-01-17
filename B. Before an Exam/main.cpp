#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int day , sum ;
    cin >> day >> sum ;
    int arr[day][3] ;

    for(int i = 0 ; i < day ; i++){
        cin >> arr[i][0] >> arr[i][1] ;
        sum -= arr[i][0] ;
        arr[i][2] = arr[i][0] ;
    }
    if(sum < 0) cout << "NO" ;
    else{
        for(int i = 0 ; i < day ; i++){
            if(sum >= arr[i][1] - arr[i][0]){
                sum -= arr[i][1] - arr[i][0] ;
                arr[i][2] = arr[i][1] ;
            }
            else if(sum < arr[i][1] - arr[i][0]){
                arr[i][2] = arr[i][0] + sum ;
                sum = 0 ;
                break ;
            }
        }
        if(sum > 0) cout << "NO" ;
        else{
            cout << "YES\n" ;
            for(int i = 0 ; i < day ; i++) cout << arr[i][2] << " " ;
        }
    }
}

int main(){
    solve() ;
}