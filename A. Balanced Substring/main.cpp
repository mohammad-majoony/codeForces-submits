#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int length , ind1 = -1 , ind2 = -1 ;
    cin >> length ;
    string text ;
    cin >> text ;

    for(int index = 1 ; index < length ; index++){
        if(text[index] != text[index - 1]){
            ind1 = index ;
            ind2 = index + 1 ;
        }
    }

    cout << ind1 << " " << ind2 << "\n" ;
}

int main(){
    int tc ; 
    cin >> tc ;
    while(tc--) solve() ;
}