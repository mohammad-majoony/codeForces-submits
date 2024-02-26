#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

// ai equals 0 , the gym is closed and the contest is not carried out ;
// ai equals 1 , the gym is closed , but the contest is carried out ; c
// ai equals 2 , the gym is open and the contest is not carried out ; g
// ai equals 3 , the gym is open and the contest is carried out ; gc 

void slove(){ 
    int len , num  , count = 0 , last = 0 ; // 1 => c , 2 => g , 0 => nothing 
    cin >> len ;

    for(int i = 0 ; i < len ; i++){
        cin >> num ;
        if(!num || (last == num && num != 3)){
            if(num != 3) last = 0 ; 
            count++ ;
        }
        else{
            if(last == 3 && num == 3) continue ;
            else if(num == 3 && last){
                if(last == 1) last = 2 ;
                else last = 1 ;
            }
            else last = num ;
        }
    }
    cout << count ;
}

int main(){
    MMD 
    slove() ;
}