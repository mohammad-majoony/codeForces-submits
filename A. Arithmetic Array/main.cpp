#include<bits/stdc++.h>
using namespace std ;
int main(){
    int tc , length , num , sum;
    cin >> tc ;
    for(int i = 0 ; i < tc ; i++){
        cin >> length  ;
        sum = 0 ;
        for(int i = 0 ; i < length ; i++){
            cin >> num ;
            sum += num ;
        }
        if(sum == length) cout << 0 << endl ;
        else if(sum > length) cout << sum - length << endl ;
        else cout << 1 << endl ;
    }   
}