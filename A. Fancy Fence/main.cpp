#include<bits/stdc++.h>
using namespace std ;
int main(){
    int tc , angle , number , flag ;
    double res ;
    cin >> tc ;
    for(int i = 0 ; i < tc ; i++){
        cin >> angle ;
        number = 3 ;
        flag = 1 ;
        while(true){
            res = ((number - 2) * 180) / static_cast<double>(number) ;
            if(res == angle){
                flag = 0 ;
                cout << "YES" << endl ;
                break;
            }
            if(res > angle) break;
            number++ ;
        }
        if(flag) cout << "NO" << endl ;
    }
}