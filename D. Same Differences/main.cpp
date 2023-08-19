#include<bits/stdc++.h>
using namespace std ;
int main(){
    int tc , length , num;
    cin >> tc ;
    for(int i = 0 ; i < tc ; i++){
        cin >> length ;
        map<int , int> table ;
        unsigned long long int count = 0 ;
        for(int index = 0 ; index < length ; index++){
            cin >> num ;
            count += table[num - index] ;
            table[num - index]++ ;
        }
        cout << count << endl ;
    }
}