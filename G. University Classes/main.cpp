#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len ; cin >> len ;
    string txt ;
    int arr[7] {0} ;
    for(int ind1 = 0 ; ind1 < len ; ind1++){
        cin >> txt ;
        for(int ind2 = 0 ; ind2 < 7 ; ind2++){
            if(txt[ind2] == '1') arr[ind2]++ ;
        }        
    }

    cout << *max_element(arr , arr + 7) ;
}