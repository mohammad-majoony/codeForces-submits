#include<bits/stdc++.h>
#define endl '\n' ;
typedef long long ll ;
using namespace std ;

int main(){
    int len , num , count = 0 , maxi = 0 , start , st = 1 ;
    cin >> len ;

    while(len--){
        cin >> num ;
        if(num) count++ ;
        else{
            maxi = max(maxi , count) ;
            if(st) start = count ;
            count = 0 ; st = 0 ;
        }
        if(!len && !st) count += start ;
    }

    cout << max(maxi , count) ;
}