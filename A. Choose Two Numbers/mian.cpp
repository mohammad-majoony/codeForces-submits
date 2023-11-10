#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len1 , len2 , max1 , max2 , num ;

    cin >> len1 ;
    for(int index = 0 ; index < len1 ; index++){
        cin >> num ;
        max1 = (max1 > num) ? max1 : num ;
    }

    cin >> len2 ;
    for(int index = 0 ; index < len2 ; index++){
        cin >> num ;
        max2 = (max2 > num) ? max2 : num ;
    }

    cout << max1 << " " << max2 ;
}