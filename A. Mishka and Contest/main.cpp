#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len , skill ;
    cin >> len >> skill ;
    int problems[len] ; 
    for(int index = 0 ; index < len ; index++) cin >> problems[index] ;

    int start = 0 , end = len - 1 , count = 0 ;

    while(start <= end){
        if(problems[end] <= skill) end-- ;
        else if(problems[start] <= skill) start++ ;
        else break ;
        count++ ;
    }
    cout << count ;
}