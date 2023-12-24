#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int len ; 
    scanf("%d" , &len) ;
    char lr[len] ;
    int pos[len] , mini = -1 ;

    scanf("%s" , &lr) ;
    for(int i = 0 ; i < len ; i++) scanf("%d" , &pos[i]) ;

    for(int i = 1 ; i < len ; i++){
        if(lr[i - 1] == 'R' && lr[i] == 'L' && (mini == -1 || (pos[i] - pos[i - 1])  / 2 < mini))
            mini = (pos[i] - pos[i - 1]) / 2 ;
    }

    printf("%d" , mini) ;
}