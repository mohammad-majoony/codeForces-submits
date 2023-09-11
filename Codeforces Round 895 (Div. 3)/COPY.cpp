#include<bits/stdc++.h>
#define ll long long 
using namespace std  ;

bool IsPrime(int number){
    if(number == 2) return true ;
    if(number < 2) return false;
    for(int index = 2 ; index * index <= number ; index++){
        if(number % index == 0) return false ;
    }
    return true ;
}

ll divion(ll number){
    for(int index = 2 ; index * index <= number ; index++){
        if(number % index == 0) return index ;
    }
    return number ;
}

void slove(){
    ll a , b ;
    cin >> a >> b ;
    bool pr = true ;

    if(a == b && (a == 1 || IsPrime(a))) pr = false ;
    else if((a == 1 && (b == 2 || b == 3)) || (a == 2 && b == 3)) pr = false ;

    if(!pr) cout << -1 << endl ;

    else{
        if(a == b){
            if(a % 2){
                ll ans = divion(a) ;
                cout << ans << " " << a - ans << endl ;
            }else{
                cout << a / 2 << " " << a / 2 << endl ;
            }
        }else{
            if(a % 2 != 0 && a != 1) a++ ;
            else if(a == 1) a += 3 ;
            else if(a == 2) a += 2 ;
            cout << a / 2  << " " << a / 2 << endl ;
        }
    }

}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}