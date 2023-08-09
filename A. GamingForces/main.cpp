#include <bits/stdc++.h>
using namespace  std ;
int main(){
    int testCase ;
    cin >> testCase ;
    for(int i = 0 ; i < testCase ; i++){
        int length ;
        cin >> length ;
        vector<int> vec ;
        for(int i = 0 ; i < length ; i++){
            int val ;
            cin >> val ;
            vec.insert(vec.end(),val) ;
        }
        sort(vec.begin() , vec.end() , greater<int>()) ;
        int count = 0 ;
        for(int i = 0 ; i < length ; i++){
            if (vec[i] == 1){
                count += 1 ;
                if(i + 1 != length) 
                    vec[i + 1] -= 1 ;
            }
            else if(vec[i] == 0){
                continue;
            }
            else{
               count += 1 ; 
            }
        }
        cout << count << endl ;
    } 
}