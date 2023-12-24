#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len , leftO = 0 , leftL = 0 , rightO = 0 , rightL = 0 , ans = -1 ;
    scanf("%d" , &len) ;
    char txt[len] ;
    scanf("%s" , txt) ;

    for(int index = 0 ; index < len ; index++){
        if(txt[index] == 'L') leftL++ ;
        else leftO++ ;
    }
 
    for(int index = len - 1 ; index > 0 ; index--){
        if(txt[index] == 'L'){
            rightL++ ;
            leftL-- ;
        }
        else{
            rightO++ ;
            leftO-- ;
        }

        if(leftL != rightL && leftO != rightO){
            ans = index ;
            break ;
        }
    }

    printf("%d" , ans) ;
}