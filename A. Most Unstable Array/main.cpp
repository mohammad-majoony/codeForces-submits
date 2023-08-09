#include <bits/stdc++.h>
using namespace std ;
int main(){
    int test ;
    cin >> test ;
    for(int i = 0 ; i < test ; i++){
        int lenght , sum ;
        cin >> lenght >> sum ;
        cout << sum * min(lenght - 1 , 2) << endl ;
    }
}