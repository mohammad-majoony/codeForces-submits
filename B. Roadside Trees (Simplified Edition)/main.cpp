#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , num , last ; 
    scanf("%d" , &len) ;
    int count = 0 ; 
    for(int index = 0 ; index < len ; index++){
        scanf("%d" , &num) ;
        if(index == 0) count += num + 1 ; 
        else count += abs(last - num) + 2 ;
        last = num ;
    }
    printf("%d" , count) ;
}